//hide loading animation
function hideLoading(){
    document.querySelector('.loading').style.visibility="hidden";
}
function visibleLoading(){
    document.querySelector('.loading').style.visibility="visible";
}
hideLoading();
function isValidURL(string) {
  var res = string.match(/(http(s)?:\/\/.)?(www\.)?[-a-zA-Z0-9@:%._\+~#=]{2,256}\.[a-z]{2,6}\b([-a-zA-Z0-9@:%_\+.~#?&//=]*)/g);
  return (res !== null)
};
function summarize() {
    visibleLoading();
    let youtube_url = document.querySelector('#youtube-url').value;
    if(isValidURL(youtube_url)){
         console.log(youtube_url);
         document.querySelector('.row-1').style.visibility='hidden'
         document.querySelector('.row-2').style.visibility='hidden'
         window.location.replace("/summarize?youtube_url="+youtube_url);
    }
    else{
        window.alert("Invalid Youtube URL");
        document.querySelector('#youtube-url').value=''
        hideLoading();
    }

}