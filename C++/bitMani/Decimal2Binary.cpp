#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
long long toBinary(long long num){
   long long binary=0;
   long long p=1;
   while(num>0){
    binary+=(p*(num%2));
    p*=10;
    num/=2;
   }

  return binary;
}
void toBinarytBitwise(int num){
  int binary=0;
  int p=1;
    while(num>0){
        binary +=(num&1)*p;
        p*=10;
        num=num>>1;
     
    }

    cout<<binary;
}
 void toBinaryString(long long num){
    string binary;
    while(num>0){
      //binary+= to_string(num&1);
            //OR
      //binary.push_back('0'+(num&1));
            //OR
      if(num%2==0){
          binary.push_back('0');
      }
      else{
        binary.push_back('1');
      }
      num=(num>>1);
    }
    reverse(binary.begin(),binary.end());
    cout<<binary;
 }
int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
   long long n;
   cin>>n;
   cout<<toBinary(n)<<endl;;
   toBinarytBitwise(n);
   cout<<endl;
   toBinaryString(n);
}

