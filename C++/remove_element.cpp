#include <iostream>
using namespace std;
void dissolver(int* a,int index,int* n){
        for(int i=index;i<*n;i++){
            a[i]=a[i+1];
        }
        (*n)--;
}
int main() {
    int a[]={6,2,1,2,5,6,3,2,2,2,2,2,1,4,5,7,9,2,7,5,8,8,4,3,1};
    int n= sizeof(a)/sizeof(*a);
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        if(a[i]==key){
            cout<<i<<endl;
                dissolver(a,i,&n);
                i--;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
}
