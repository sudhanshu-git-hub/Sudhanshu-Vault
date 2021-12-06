#include <iostream>
#include<map>
using namespace std;
int main() {
    int a[]={1,6,8,3,4,2,6,2,4,1,2,4,6,8,3,4,6,8,5,5,5,9};
    //find the occunrece of each elemen  in array
    map<int,int> m;
    for(int x:a){
        m[x]+=1;
    }
    for(auto p:m){
        cout<<"Element : "<<p.first<<" Occurence : "<<p.second<<endl;
    }
}
