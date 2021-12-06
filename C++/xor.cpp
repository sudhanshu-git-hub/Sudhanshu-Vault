#include <iostream>
#include<set>
using namespace std;
int main() {
    int a[]={1,5,3,7,8,5,1,4,7,8};
    int n= sizeof(a)/sizeof(*a);
    set<int> s;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
           if((a[i]^a[j])==0){
               s.insert(a[i]);
           }
        }
    }
    for(int i:s){
        cout<<i<<",";
    }
}
