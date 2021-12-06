#include <iostream>
#include<vector>
#include<map>
using namespace std;

int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    vector<int> v1{1,3,5,7,1,3,4,4,1};
    vector<int> v2{1,3,3,4,2,1,1,3,8};
    map<int,int> m;
    for(int i:v1){
      m[i]=1;
    }
    for(int i:v2){
      m[i]=1;
    }
    for(auto p:m){
      cout<<p.first<<",";
    }
}

