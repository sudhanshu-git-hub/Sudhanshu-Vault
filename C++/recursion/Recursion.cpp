#include <iostream>
using namespace std;

  int factorial(int n){
    //smallest problem
    if(n==1){
      return 1;
    }

    //int smaller =factorial(n-1);
    //int bigger = n*smaller;
    return n*factorial(n-1);

  }
int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
  cout<<factorial(8);
   
}

