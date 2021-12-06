#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt

    freopen("output.txt", "w", stdout);
  #endif

   //Code
   
   int n;
   cin>>n;
   int count=0;
   while(n>0){
    if(n&1){
      count++;
    }
    n=n>>1;
   }
   cout<<"Number of SET(1) bits"<<count;
}

