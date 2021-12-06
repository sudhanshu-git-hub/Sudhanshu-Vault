#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void shiftInsert(vector<int> &v,int index){
      //v.resize(v.size()+1);
     for(int i=v.size();i>=index;i--){
      v[i+1]=v[i];
     }
}
int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    vector<int> v1{1,3,5,7};
    vector<int> v2{2,4,6,8};
    //BruteForce greedy
    // for(int i:v2){
    //   v1.push_back(i);
    // }
    // sort(v1.begin(),v1.end());
    // for(int i:v1){
    //   cout<<i<<",";
    // }

    //v1.resize(v1.size()+v2.size());
   
    for(int i:v2){
      int j;
        for(j=0;j<v1.size();j++){
            if(i<v1[j]){
              v1.resize(v1.size()+1);
              shiftInsert(v1,j); 
              v1[j]=i;
              break; 
            }
        }
        if( j==v1.size() && i>v1[j-1]){
              v1.resize(v1.size()+1);
              v1[j]=i;
            }
    }

    for(int i:v1){
      cout<<i<<",";
    }
}

