#include <iostream>
#define SIZE(a)(sizeof(a)/sizeof(*a))
using namespace std;
bool compare(int a,int b){

        return a>b;
}
void bubble_sort(int a[],int n,bool (&cmp)(int a,int b)){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<i;j++){
            if(cmp(a[j],a[j+1])){
                swap(a[j+1],a[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main() {
   int a[]={3,6,1,5,8,9,43};
   bubble_sort(a,SIZE(a),compare);
   
}
