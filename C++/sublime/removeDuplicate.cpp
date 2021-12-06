#include <iostream>
using namespace std;

void removeDuplicateExtSpace(int a[100],int n){
  int temp[100];
   temp[0]=a[0];
   int count=0;
   for(int i=1;i<n;i++){
      if(temp[count]!=a[i]){
        temp[++count]=a[i];
      }
   }
   for(int i =0;i<=count;i++){
    cout<<temp[i]<<",";
   }
   cout<<endl;
}
void removeDuplicateNOExtSpace(int a[100],int n){
    int j=0;
    for(int i=0;i<n-1;i++){
        if(a[i+1]>a[i]){
          a[++j]=a[i+1];
        }
    }
    for(int i=0;i<=j;i++){
      cout<<a[i]<<",";
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
   int a[]={1,1,2,2,3,4,4,5};
   int b[]={1,2,3,4,4,5};
   int n=sizeof(a)/sizeof(*a);
   removeDuplicateExtSpace(a,n);
   removeDuplicateNOExtSpace(b,6);
}

