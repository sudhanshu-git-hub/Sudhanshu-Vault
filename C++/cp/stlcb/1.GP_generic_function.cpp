//#include<bits/stdc++.h>
#include <iostream>
#include<cstring>

#define SIZE(a)(sizeof(a)/sizeof(*a))

using namespace std;

template<typename T>

//this function is limited to int array only therefore this function is not generic

// int linear_search(int a[],int n,int key){
//     for(int i=0;i<n;i++){
//         if(a[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }

//GENERIC FUNCTION
int linear_search(T a[],int n,T key){
    //cout<<typeid(a).name();
    for(int i=0;i<n;i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}

int main() {

    //Generic Function : fxn work for every datatypes value.
    //Example-- make generic search function
    int a[]={1,24,663,352,6452,1,6};
    //to search 352 in a array
    cout<<linear_search(a,SIZE(a),352)<<"\n";

    string s[]={"Sudhanshu","Aman","Ajey"};
    string key="Aman";
    cout<<linear_search(s,SIZE(s),key)<<"\n";
    float f[]={1.2,3.4,4.5};
    float k=1.2;
    cout<<linear_search(f,SIZE(f),k);

}