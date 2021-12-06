#include <iostream>
using namespace std;

bool isPrime(int n){
        if(n==1){
          return false;
        }
        if(n==2){
          return true;
        }
        // 2...N-1
        // 2...sqrt(N)
        for(int i=2;(i*i)<n;i++){
          if(n%i==0){
            return false;
          }
        }

        return true;
}
int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    int n;
    cin>>n;
    cout<<isPrime(3);
   
}

