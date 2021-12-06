#include <iostream>
using namespace std;

void printPrime(int limit){

  int a[limit];
    for(int i=0;i<limit;i++){
        //
        a[i]=i+1;
    }
  int key=0;

    for(int i=0;(i*i<=limit);i++){
      if(a[i]==1){
        a[i]=0;
        continue;
      }
      else if(a[i]==0){
        continue;
      }
      else{
        key=a[i];
      }

      for(int j=key;j<limit;j++){
          if(a[j]%key==0){
            a[j]=0;
          }
      }
    }
    int count=0;
    for(int i:a){
      if(i){
        cout<<i<<endl;
        count++;
      }
      
    }
    cout<<"Count: "<<count;
    

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

