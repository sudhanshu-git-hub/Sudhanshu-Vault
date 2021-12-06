#include <iostream>
#include<string>
using namespace std;

void substring(string str,int n){
    for(int start =0;start<n;start++){
      for(int len =1;len<=n-start;len++){
        string sub = str.substr(start,len);
          if(sub.size()>4){
            cout<<sub<<endl;
          }
      }
    }
}
int main() {

  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //Code
   string str;
   cin>>str;
     substring(str,str.size());
}

