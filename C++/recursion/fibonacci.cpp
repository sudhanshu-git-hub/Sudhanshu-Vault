#include <iostream>
using namespace std;
int fibonacci(int n){
  if(n==0) return 0;
  if(n==1) return 1;

  int smaller1= fibonacci(n-1);
  int smaller2 = fibonacci(n-2);

  int bigger = smaller1+smaller2;

  return bigger;
}
int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    for(int i=0;i<14;i++){
 cout<<fibonacci(i)<<",";
    }
   
   
}

