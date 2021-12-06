#include <iostream>
#include<cstring>
#include<string>
using namespace std;

int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif
   //------------------CODE--------------
    string intro = "My name na is Sudhanshu";
    string word="na ";
    size_t n=intro.find(word);
    if(n==string::npos){
      cout<<"Not Found";
    }
    else{
      cout<<"Start:"<<n<<" End: "<<n+word.length();
    }
    
    //---//////
    word="name";
     n=intro.find(word);
    intro.erase(n,word.length());
    cout<<endl<<intro;

   //String input
    string inp;
    //cin>>inp;
    getline(cin,inp,'#');
    cout<<endl<<inp;

    //string compare lexio
    string a ="a";
    string b= "z";

    //cout<<(a>b)<<endl;
    cout<<a.compare(b);
}

