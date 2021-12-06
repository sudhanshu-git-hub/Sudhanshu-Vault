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
    // 2 Pointer Approach
    // sort the array 
    //   (a,b) == sum a++ b--
    //   (a,b)>sum b--
    //   (a,b)<sum a++
    vector<int> v{4,1,5,6,10,8};
    int sum =11;
    sort(v.begin(),v.end());

    int i=0;
    int j=v.size()-1;
    while(i<j){
      int pairSum =v[i]+v[j];
      if(pairSum==sum){
        cout<<"("<<v[i]<<","<<v[j]<<")"<<endl;
        i++;
        j--;
      }
      else if(pairSum>sum){
        j--;
      }
      else{
        i++;
      }

    }

   
}

