function isValidURL(string) {
  var res = string.match(/(http(s)?:\/\/.)?(www\.)?[-a-zA-Z0-9@:%._\+~#=]{2,256}\.[a-z]{2,6}\b([-a-zA-Z0-9@:%_\+.~#?&//=]*)/g);
  return (res !== null)
};
function summarize() {
    let youtube_url = document.querySelector('#youtube-url').value;
    if(isValidURL(youtube_url)){
         console.log(youtube_url);
         window.location.replace("/summarize?youtube_url="+youtube_url);
    }
    else{
        window.alert("Invalid URL");
    }

}