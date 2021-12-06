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
   int digit = floor(log10(n)+1);
   int maxBinaryDigit = floor(digit/log10(2)+1);
   int revBinary[maxBinaryDigit];
   int i;
   for(i=0;n;i++){
    revBinary[i]=n%2;
    n=n/2;
   }
   for(int j=i-1;j>=0;j--){
    cout<<revBinary[j];
   }
}


