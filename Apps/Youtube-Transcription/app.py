from cgitb import text

from flask import Flask, render_template,request
from youtube_transcript_api import YouTubeTranscriptApi
from youtube_transcript_api.formatters import TextFormatter
from transformers import pipeline
from flask import request


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

def getVideoId(youtube_url):
     id = youtube_url.split("v=")
     videoID = id[1][:11]
     return videoID

# define your resource endpoints
@app.route('/')
def index_page():
    #print(getTextTranscript('YgX97OjSozw'))
    #print(summarizeTranscript('YgX97OjSozw'))
    return render_template('index.html')

@app.route('/home')
def home_page():
    #print(getTextTranscript('YgX97OjSozw'))
    #print(summarizeTranscript('YgX97OjSozw'))
    return render_template('home.html')
@app.route('/summarize')
def summary_page():
    #print(getTextTranscript('YgX97OjSozw'))
    #print(summarizeTranscript('YgX97OjSozw'))
    args = request.args
    youtube_url =args.get("youtube_url")
    videoid = getVideoId(youtube_url)
    transcipt = getTextTranscript(videoid)
    summary= summarizeTranscript(videoid)
    return render_template('summary.html',transcript=transcipt,summary=summary)

#@app.route('http://[hostname]/api/summarize?youtube_url=<url>',methods=['GET'])
#def index_page():
    #yotube_url = request.args['youtube_url']
    #id = yotube_url.split("v=")
    #videoid = id[1][:11]
    #return summarizeTranscript(videoid)




# server the app when this file is run
if __name__ == '__main__':
    app.run()