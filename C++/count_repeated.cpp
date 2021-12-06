#include <bits/stdc++.h>
using namespace std;
int main() {
    int a[]={0,0,3,2,3,1,3,2,1,1,32,4,3,4,6,7};
    int size = sizeof(a)/sizeof(*a);
    vector<int> v(a,a+size);
    sort(v.begin(),v.end());
    auto upper= upper_bound(v.begin(),v.end(),0);
    auto lower =  lower_bound(v.begin(),v.end(),0);

    //copy vector
    vector<int> replica(v.begin(),v.end());
    vector<int>::iterator it;
    it=unique(replica.begin(),replica.end());
    replica.resize(distance(replica.begin(),it));
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    int count =0;
    for(int i:replica){
        auto upper= upper_bound(v.begin(),v.end(),i);
        auto lower =  lower_bound(v.begin(),v.end(),i);
        if(upper-lower==1){
            count++;
        }
        cout<<"Count of "<<i<<" is "<<upper-lower<<endl;
    }
    
    cout<<"Unique Numbers :"<<count;
}
