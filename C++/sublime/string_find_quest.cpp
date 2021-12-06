#include <iostream>
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
    string str = "Replace vo-wel in : this "; 
    string vowels="aeiou";
    size_t pos =str.find_first_of(vowels);
    while(pos!=string::npos){
      str[pos]='*';
      //str.erase(pos,1);
      pos=str.find_first_of(vowels,pos+1);
    }
    cout<<str<<endl;

    //find first not alphabet
    string alphabet="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    pos=str.find_first_not_of(alphabet);5
    cout<<str[pos];

    
   
}

