#include <iostream>
using namespace std;

bool isPrime(int num){
  if(num ==1){
    return false;
  }
  else if(num>2 && (num&1)==0){
    //Even Number >2
    return false;
  }
  else if(num>=9){
    //Odd num
    if(num%3==0||num%5==0||num%7==0){
      return false;
    }
    else{
      return true;
    }
  }
  else{
    return true;
  }
  
}
int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif
   //------------------CODE--------------
    int count=0;
    for(int i=1;i<500;i++){
      if(isPrime(i)){
         cout<<i<<endl;
         count++;
      }
    }
    cout<<endl<<"Count: "<<count;
   return 0;
}

