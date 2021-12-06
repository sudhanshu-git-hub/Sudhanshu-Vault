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
    // Pattern : Right Triangle
    // *
    // **
    // ***
    // ****
    // *****

    //Column Restiction approach

    int r=5,c=5;
    for(int i=1;i<=r;i++){
      //Column Restriction
      for(int j=1;j<=i;j++){
        cout<<"*";

      }
      cout<<endl;
    }

    //Only row approach
      cout<<"Row Approach"<<endl;
      int t=r;
    while(t){
      int temp = 5-t+1;
      while(temp){
          cout<<"*";
          temp--;
      }
      cout<<endl;
      t--;
    }

    cout<<"Space-Star Approach"<<endl;
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

   
}

