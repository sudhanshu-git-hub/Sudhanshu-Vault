#include <iostream>
#include<vector>
using namespace std;
  void printSet(vector<int> v){
    cout<<"(";
      for(int i:v){
        if(i)
        cout<<i<<",";
      }
      cout<<")";
      cout<<endl;
  }

  
  // helper+stage detector  i=STAGE 
  int subsetTree(vector<int> set,vector<int> subset,int i){
      if(i==set.size()){
        printSet(subset);
        return 0;
      }

        //Include number
        subset[i]=set[i];
        subsetTree(set,subset,i+1);

      //Exclude number
      subset[i]=0;
      subsetTree(set,subset,i+1);
      
        return 0;
  }
  void subset(vector<int> set){
    vector<int> subset(set.size(),0);
    subsetTree(set,subset,0);

  }
int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
   vector<int> v{3,7,8};
   subset(v);
  
}

