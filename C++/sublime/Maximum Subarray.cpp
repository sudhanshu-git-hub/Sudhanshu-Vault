#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int maxSubarray(vector<int> &nums){
    int max=INT_MIN;
    vector<int> csum(nums.size(),0);
    for(int i=0;i<nums.size();i++){
      if(i==0){
        csum[i]=nums[i];
      }
      else{
          csum[i]= csum[i-1] +nums[i];
      }
    }

    for(int s=0;s<nums.size();s++){
      for(int e =s;e<nums.size();e++){
        int sum;
        if(s==0){
           sum= csum[e];
        }
        else{
          sum = csum[e]-csum[s-1];
        }
        if(max<sum){
          max=sum;
        }
      }
    }
    return max;
}

int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    vector<int> nums;
    int input;
    while(cin>>input){
      nums.push_back(input);
    }
   cout<<maxSubarray(nums);
}

