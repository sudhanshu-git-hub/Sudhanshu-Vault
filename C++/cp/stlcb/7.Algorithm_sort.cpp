
//#include<bits/stdc++.h>
#include <iostream>
#include<algorithm>
#define SIZE(a)(sizeof(a)/sizeof(*a))
using namespace std;

//comparator functor
class Compare{
    public:
            bool operator()(int a,int b){
                return a>b;
            }
};
//comaprator function
bool comparator(int a,int b){
    return a>b;
}


int main() {

    int a[]={5,9,2,6,9,2,377,5,7,47325,1,2,4,34};
    int n= SIZE(a);
    /*
        sort: default sort in ascending order.(can be alter using comparator)
        Complexity: Vary (depending upon the size of container).
        param:[begin,end,?cmp) where end is excluded.
    */

    //          sort(a,a+n);

    //with comparator fxn(decresing order)
    //      sort(a,a+n,comparator);

    //with comparator functor(decresing order)
        Compare cmp;
          sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
