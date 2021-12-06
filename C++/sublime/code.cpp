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
   int n;
   cin>>n;
   //number of digits
   if(n){
   int no_of_bits= ceil(floor(log10(n)+1)/log10(2));
   cout<<"Number of bits required :" <<n<<" Digit no."<<" :="<<no_of_bits;
   }
   else{

      cout<<"0";
   }
   
   
}

