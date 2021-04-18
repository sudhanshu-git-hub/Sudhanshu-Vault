
#include<iostream>
#include<algorithm>

using namespace std;

bool comparator(int a,int b){
    //used in swap
    //cout<<a<<" compare  "<<b<<"\n";
    return a>b;
}
int main(){
    int a[]={4,6,2,9,1,4,0,3};
    int n = sizeof(a)/sizeof(int);
    //no comparator
    //sort(a,a+n);

    //with comparator(boolean function)
    sort(a,a+n,comparator);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
