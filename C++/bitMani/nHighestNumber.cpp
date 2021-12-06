#include <iostream>
#include<vector>

using namespace std;

int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
   vector<int> v{2,3,1,7,11,44,55,4,32};
   int n;
   cin>>n;
      int com =n-1;
   for(int i=0;i<v.size();i++){
    int count=0;
      for(int j=0;j<v.size();j++){
        if(v[i]<v[j])
          count++;
      }
      if(count==com){
        cout<<n<<"th highest: "<<v[i]<<endl;
        return 1;
      }
   }
}

