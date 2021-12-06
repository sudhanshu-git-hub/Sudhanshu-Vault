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
    //  ****
    //   ***
    //    **
    //     *

    int r=5;
    int c=5;
    for(int i=1;i<=r;i++){
      //Space 
      for(int j=1;j<=i-1;j++){
        cout<<" ";
      }
      //Star
      for(int j=i;j<=c;j++){
        cout<<"*";
      }
      cout<<endl;
    }
   
}

