#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
long long maximumNumber(string str,int k){
        int n=str.size();
        vector<long long> v;
        for(int i=0;i<=k;i++){
          string sub = str.substr(i,n-k);
          v.push_back(stoll(sub));
        }
        // for(long long i:v){
        //   cout<<i<<endl;
        // }
        auto it = max_element(v.begin(),v.end());
  return *it;
   }
int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt

    freopen("output.txt", "w", stdout);
  #endif

   //Code
   string str;
   cin>>str;
   int k;
   cin>>k;
   cout<<maximumNumber(str,k);
   
   
}

