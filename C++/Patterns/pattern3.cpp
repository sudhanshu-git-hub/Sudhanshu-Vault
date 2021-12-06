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
  
  //Pattern :
//     *  
//    **
//   ***
//  ****
// *****
    int r=5;
    int c=5;
    for(int i=1;i<=r;i++){

      // Space Insertor
        for(int j=1;j<=c-i;j++){
          cout<<" ";
        }
      // Star Insertor
       for(int j=c-i+1;j<=c;j++){
        cout<<"*";
       }
       cout<<endl;
    }
}

