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

    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *

    //Patition Star-Space Approach
    int r=5;
    int c=10;

    for(int i=1;i<=5;i++){
      //Part c(1-5)
      //Space
      for(int j=1;j<=i-1;j++){
        cout<<" ";
      }
      //Star -Space
      for(int j=i;j<=5;j++){
        if(i&1){
          //odd row odd place *
          if(j&1){
            cout<<"*";
          }
          else{
            cout<<" ";
          }
        }
        else{
          //Even row even place *
          if(j&1){
            cout<<" ";
          }
          else{
            cout<<"*";
          }
        }
      }
      //Part 2 
        //Star-Space c(6-10)
      for(int j=6;j<=10-i;j++){
        if(i&1){
          //odd row odd place *
          if(j&1){
            cout<<"*";
          }
          else{
            cout<<" ";
          }
        }
        else{
          //Even row even place *
          if(j&1){
            cout<<" ";
          }
          else{
            cout<<"*";
          }
        }
      }
        //Space
        for(int j=10-i+1;j<=10;j++){
          cout<<" ";
        }
            cout<<endl;
    }
    
   
}

