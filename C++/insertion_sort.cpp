#include <iostream>
using namespace std;
void swap(int *a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int a[]= {5,3,2,1,4,1,2};
    for(int i=1;i<7;i++){
        for(int j=i-1;j>=0;j--){
            if(a[j]>=a[j+1]){
                swap(&a[j],&a[j+1]);
            }
            else{
                break;
                
            }
            
        }
    }
        for(int i:a){
            cout<<i;

        }
}
