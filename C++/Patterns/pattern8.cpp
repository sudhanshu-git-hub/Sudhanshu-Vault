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
    // *
    // **
    // ***
    // ****
    // *****
    // ****
    // ***
    // **
    // *

    //Partition Approach
    //Part 1 row(1-5)
    for(int i=1;i<=5;i++){
      //Star
      for(int j=1;j<=i;j++){
          cout<<"*";
      }
    //Space
      for(int j=i+1;j<=5;j++){
        cout<<" ";
      }
      cout<<endl;
    }

    //Part 2 row(6-10)
    for(int i=6;i<=10;i++){
      //Star
      for(int j=1;j<=10-i;j++){
        cout<<"*";
      }
    //Space
      for(int j=10-i+1;j<=5;j++){
        cout<<" ";
      }
      cout<<endl;
    }
   
}

