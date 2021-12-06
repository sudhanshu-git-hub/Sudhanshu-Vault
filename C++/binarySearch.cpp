#include <iostream>
using namespace std;
bool binarySearch(int* a,int low,int high,int key){
    if(high>=low){
        int mid = (low +high)/2;
        if(a[mid]==key){
            return true;
        }
        if(a[mid]>key){
             return binarySearch(a,low,mid-1,key);
         }
        return binarySearch(a,mid+1,high,key);
    }
    return false;
}
int main() {
   int a[] ={1,2,4,6,9,10,31,34,64};
    int n= sizeof(a)/sizeof(*a);
    int key=0;
    cout<<binarySearch(a,0,n-1,key);
  
}
