
#include <iostream>
#include<algorithm>
#include<vector>

#define Num(a)(sizeof(a)/sizeof(*a))

using namespace std;

int main() {
   int a[]={1,5,3,7,3,9,12,63,0};
   int n;
   cin>>n;
    vector<int> v(a,a+Num(a));
    sort(v.begin(),v.end());
    if(binary_search(v.begin(),v.end(),n)){
        cout<<"element found ";
    }
    else{
        cout<<"element not found";
    }

}
