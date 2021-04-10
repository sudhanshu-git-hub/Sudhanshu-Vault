
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    vector<int> v;
    v.reserve(100);
    int n;
    cin>>n;
    //input
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    //sort
    sort(v.begin(),v.end());
    //printing
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
