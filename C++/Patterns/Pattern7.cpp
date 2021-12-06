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
    //Pattern 
    // *****
    // *****
    // *****
    // *****
    // *****
    for(int i=1;i<=5;i++){
      for(int j=1;j<=5;j++){
        cout<<"*";
      }
      cout<<endl;
    }
   
}

