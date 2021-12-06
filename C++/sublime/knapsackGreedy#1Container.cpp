#include <iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
  return a.first>b.first;
}
int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    unordered_map<int,int> map;
    int n;
    cin>>n;
    while(n){
      pair<int,int> p;
      cin>>p.first;
      cin>>p.second;
      map.insert(p);
      n--;
    }
    //sort(map.begin(),map.end(),cmp);
    for(auto p:map){
      cout<<"Profit: "<<p.first<<" Weight: "<<p.second<<endl;
    }
  
 
}

