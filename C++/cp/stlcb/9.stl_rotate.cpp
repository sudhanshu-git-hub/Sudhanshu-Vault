

#include <iostream>
#include<algorithm>

using namespace std;
int main() {
    int arr[]={1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(*arr);
    //LEft ROTATE
    rotate(arr,arr+2,arr+n); 
    //RIGHT ROTATE
    rotate(arr,arr+n-2,arr+n); 
  
    for(int i:arr){
        cout<<i<<" ";
    }
}
