#include <iostream>
#include<ctime>
#include<algorithm>
using namespace std;

void swap(int*a ,int*b){
  int temp=*a;
  *a=*b;
  *b=temp;
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
    int a[n];

    for(int i=0;i<n;i++){
      a[i]=n-i;
    }
      time_t start = clock();
      //Bubble Sort: make bubble of two element if one greater then second swap
      for(int i=0;i<n-1;i++){
          for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
              swap(&a[j],&a[j+1]);
            }
          }
          
      }
      time_t end = clock();

      cout<<"Bubble Sort Time:"<<end-start<<endl;
    // for(int i:a){
    //   cout<<i<<",";
    // }
    //cout<<endl;


    //Selection sort: slect minimum and minimum at front


    for(int i=0;i<n;i++){
      a[i]=n-i;
    }
    start = clock();
    for(int i=0;i<n;i++){
      int min=i;
      for(int j=i+1;j<n;j++){
          if(a[i]>a[j]){
            min=j;
          }
      }
      swap(&a[i],&a[min]);
    }
    end = clock();
    cout<<"Selection Sort Time:"<<end-start<<endl;
   // for(int i:a){
   //    cout<<i<<",";
   //  }

    for(int i=0;i<n;i++){
      a[i]=n-i;
    }
    start = clock();
    sort(a,a+n);
    end= clock();
    cout<<"Merge Sort:"<<end-start<<endl;
}

