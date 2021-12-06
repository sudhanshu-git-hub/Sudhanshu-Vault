#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
   vector<int> v{2,3,1,4,5,2,4,5};
      // SORT
      sort(v.begin(),v.end());
      // remove consecutive duplicate
   vector<int>::iterator it;
    it = unique(v.begin(),v.end());
    // RESIZE Vector
    v.resize(distance(v.begin(),it));
   for(int i:v){
      cout<<i<<",";
   }
   int n;
   cin>>n;
    cout<<endl<<n<<"th highest: "<<v[v.size()-n];
   
   
}

