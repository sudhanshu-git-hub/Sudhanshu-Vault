#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 void clearBit(int &n,int i){
      int mask = (1<<i);
      mask =(~mask);
      n=(n&mask);
 }
 void updateBitOLD(int &n,int i,int v){
  int mask = 1<<i;
      if(v){
          n=(n|mask);
      }
      else{
        mask=(~mask);
        n=n&mask;
      }
 }
 void updateBit(int &n,int i,int v){
  int mask = 1<<i;
  mask=(~mask);
  n=(n&mask);
  n=(n|v<<i);

 }
int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt

    freopen("output.txt", "w", stdout);
  #endif

   //Code
   int n=10;
   updateBit(n,3,0);
   cout<<n;
   
}

