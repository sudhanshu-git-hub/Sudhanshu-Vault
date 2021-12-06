#include <iostream>
using namespace std;
bool isPrime(int n){
    //Generate prime series 0.....N
  int a[n+1];
  for(int i=0;i<=n;i++){
    a[i]=i;
  }
  a[0]=0;
  a[1]=0;
  for(int i=2;i<=n;i++){
    if(a[i]){
      for(int j=i*i;j<=n;j=j+i){
      a[j]=0;
      }
    }
    
  }
  if(a[n]){
    return true;
  }
  return false;
}
int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    cout<<isPrime(5);
   
}

