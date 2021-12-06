#include <iostream>
using namespace std;

void printPrime(int limit){
    //Generate list
  int a[limit];
  for(int i=0;i<=limit;i++){
    a[i]=i;
  }
    a[0]=0;
    a[1]=0;

    for(int i=2;i<limit;i++){
          for(int j=i*i;j<limit;j=j+i){
            a[j]=0;
          }
    }
 for(int i:a){
  //if(i)
  cout<<i<<endl;
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
    int limit;
    cin>>limit;
   printPrime(limit);
}

