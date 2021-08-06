
//#include<bits/stdc++.h>
#include <iostream>
#include<algorithm>
#include<vector>
#define SIZE(a)(sizeof(a)/sizeof(*a))

using namespace std;

int main() {
    int a[]={1,4,6,11,2};
   
    int key;
    cin>>key;
    
    auto it =find(a,a+SIZE(a),key);
    int index = it-a;
    //cout<<index<<'\n';

    vector<char> v;
    v.push_back('a');
    v.push_back('c');
    v.push_back('d');
    
    auto it2= find(v.begin(),v.end(),'z');
    int index2 =it2-v.begin();
    cout<<index2;

}
