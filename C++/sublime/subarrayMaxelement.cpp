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
    vector<int> v{1,2,3,2,5,7,3,5,8,2,1};
    for(int i:v){
      cout<<i<<",";
    }
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<=v.size()-3;i++){
        int max =v[i];
        for(int j=i;j<i+3;j++){
          cout<<v[j]<<",";
          if(v[j]>max)
            max=v[j];
        }
        cout<<"Max: "<<max<<","<<endl;
    }
   
}

