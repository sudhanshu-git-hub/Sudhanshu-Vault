#include <iostream>
#include<cmath>
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
   int digit= floor(log10(n)+1);

   cout<<digit;
   
}

