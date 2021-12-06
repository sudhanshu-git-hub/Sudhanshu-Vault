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
    vector<int> nums1{1,2,2,1};
    vector<int> nums2{2,2};

    sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> insec;
        int a =0;
        int b=0;
        while(a!=nums1.size() && b!=nums2.size()){
            if(nums1[a]==nums2[b]){
                insec.push_back(nums1[a]);
                a++;
                b++;
            }
            else if(nums1[a]<nums2[b]){
                a++;
            }
            else{
                b++;
            }
        }
        for(int i:insec){
          cout<<i<<",";
        }
   
}

