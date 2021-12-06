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
    // Pattern : Inverted Right Triangle
    // *****
    // ****
    // ***
    // **
    // *
    int r=5;
    int c=5;
    //Column Restiction approach
    for(int i=1;i<=r;i++){
      for(int j=1;j<=c-i+1;j++){
        cout<<"*";
      }
      cout<<endl;
    }
    
    //Only row approach
   cout<<"Only Row Approach"<<endl;
   int rCopy=r;
   while(rCopy){
      int temp=rCopy;
      while(temp){
        cout<<"*";
        temp--;
      }
      cout<<endl;
    rCopy--;
   }

   //Space -Star Approach
   cout<<"Space - star Approach"<<endl;
   for(int i=1;i<=r;i++){
    //Star
      for(int j=1;j<=5-i+1;j++){
        cout<<"*";
      }
    //Space
      for(int j=5-i+1+1;j<=5;j++){
        cout<<"-";
      }
      cout<<endl;
   }
   
}

