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
    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
   int r=5;
   int c=10;
   for(int i=1;i<=r;i++){
    //Part 1
    //Space
    for(int j=1;j<=5-i;j++){
      cout<<" ";
    }
    //Star-space
    for(int j=5-i+1;j<=5;j++){
      // i odd then odd places have star even place have odd
      if(i&1){
          if(j&1){
            cout<<"*";
          }
          else{
            cout<<" ";
          }
      }
      else{
        // even have star and odd have space
          if(j&1){
            cout<<" ";
          }
          else{
            cout<<"*";
          }
      }

    }
    //Part 2
    //star-space
    for(int j=6;j<=5+i;j++){
      if(i&1){
        //odd row
        if(j&1){
          //place 
          cout<<"*";
        }
        else{
          cout<<" ";
        }
      }
      else{
        //even row
        if(j&1){
          cout<<" ";
        }
        else{
          cout<<"*";
        }
      }
    }
    //space
    for(int j=5+i+1;j<=10;j++){
      cout<<" ";
    }
    cout<<endl;
   }

}

