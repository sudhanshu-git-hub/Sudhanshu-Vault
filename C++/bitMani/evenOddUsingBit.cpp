#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isOdd(int n){
  return (n&1);
}
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
   if(isOdd(n)){
    cout<<"Odd Number";
   }
   else{
    cout<<"Even Number";
   }
   
}

