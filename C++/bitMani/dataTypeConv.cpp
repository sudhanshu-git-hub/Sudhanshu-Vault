#include <iostream>
using namespace std;

int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
   
   //integer to string
    int i=10;
    //str.push_back('0'+[0-9]); works for 0-9 only 
    string str=to_string(i);
    //str.push_back('0'+19);
    //cout<<str;

    //Char to string
    char c='u';
    string str2;
    str2.push_back(c);
    cout<<str2;
   
}

