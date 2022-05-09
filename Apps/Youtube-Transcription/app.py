from cgitb import text

from flask import Flask, render_template,request
from youtube_transcript_api import YouTubeTranscriptApi
from youtube_transcript_api.formatters import TextFormatter
from transformers import pipeline
from flask import request
from transformers import BartForConditionalGeneration, BartTokenizer
from typing import List

# define a variable to hold you app
app = Flask(__name__)

def getYoutubeTranscript(youtubeID):
        return YouTubeTranscriptApi.get_transcript(youtubeID)

def getTextTranscript(youtubeID):
    transcript = getYoutubeTranscript(youtubeID)
    formatter = TextFormatter()
    text_transcript = formatter.format_transcript(transcript)
    return text_transcript

def summarizeTranscript(youtubeID):
    summarization = pipeline("summarization")
    text_transcript = getTextTranscript(youtubeID)
    summary_text = summarization(text_transcript)[0]['summary_text']
    return summary_text

def summarizeTranscriptNew(youtubeID):
    tokenizer = BartTokenizer.from_pretrained('bart-large-cnn')
    text_transcript = getTextTranscript(youtubeID)
    model = BartForConditionalGeneration.from_pretrained('bart-large-cnn')
    input_ids = tokenizer.batch_encode_plus(text_transcript, return_tensors='pt', max_length=2000)['input_ids']
    summary_ids = model.generate(input_ids)
    summaries = [tokenizer.decode(s) for s in summary_ids]
    return summaries

def getVideoId(youtube_url):
     id = youtube_url.split("v=")
     videoID = id[1][:11]
     return videoID

# define your resource endpoints
@app.route('/')
def index_page():
    return render_template('index.html')

@app.route('/home')
def home_page():
    return render_template('home.html')


@app.route('/summarize')
def summary_page():
    args = request.args
    youtube_url =args.get("youtube_url")
    videoid = getVideoId(youtube_url)
    thumbnail_url ='https://img.youtube.com/vi/'+videoid+'/0.jpg'
    transcipt = getTextTranscript(videoid)
    summary= summarizeTranscript(videoid)
    lorem ="Lorem ipsum dolor sit amet, consectetur adipiscing elit. Ut quam massa, euismod vitae rutrum elementum, dictum nec odio. Proin lacus augue, rutrum ut dapibus eget, tincidunt sit amet leo. Fusce bibendum, urna eget blandit faucibus, erat risus commodo neque, quis auctor magna mauris quis nunc. Vestibulum eget nibh quis metus euismod eleifend elementum in odio. Suspendisse tempor felis sed magna sagittis consequat. Nunc non vulputate sapien. Proin fringilla libero quis fermentum maximus. Aenean nec vulputate dolor. Nam malesuada ipsum eros, in bibendum metus finibus id. Proin in dolor ligula.Quisque lectus nisi, eleifend vel ipsum sit amet, feugiat feugiat nibh. Proin congue eros nisi, ac euismod sapien consectetur sed. Morbi pretium felis quis dolor viverra porta. Morbi dictum nulla ac tortor porttitor, quis consectetur velit eleifend. Praesent vitae mollis felis. Aenean eu enim nec est egestas posuere et nec tortor. Morbi sed gravida tortor. Praesent commodo tempus augue a faucibus. Mauris at dolor a eros lobortis euismod eu a nisl. Mauris euismod mollis libero maximus sodales. Vestibulum ultricies augue turpis. Donec rutrum ipsum sit amet commodo pellentesque. Vivamus scelerisque, ipsum et volutpat eleifend, nunc nisi lobortis metus, sit amet ultrices erat felis nec ante. Etiam condimentum varius semper."
    return render_template('summary.html',transcript=transcipt,summary=summary,thumbnail_url=thumbnail_url)



# server the app when this file is run
if __name__ == '__main__':
    app.run()