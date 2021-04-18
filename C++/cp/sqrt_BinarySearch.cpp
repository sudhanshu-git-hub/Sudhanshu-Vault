
#include <iostream>

using namespace std;
// 48 -- int --6
//bssqrt(48,0,48)
//mid 0+48/2 =24


int BinarySearchSqrt(int n,int low,int high){
    int mid = (low+high)/2;
    int sqrt = mid*mid;
    //cout<<mid<<" ";
        if(sqrt==n || (high-low)==1){
            return mid;
        }
        else if(sqrt>n){
            return BinarySearchSqrt(n,low,mid);
        }
        else{
            return BinarySearchSqrt(n,mid,high);
        }
       
}

int main() {
   int n;
   cin>>n;
   cout<<BinarySearchSqrt(n,0,n);
}
