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
    // vector<int> v1{4,1,3,5,3};
    // vector<int> v2{4,8,1,9,3,3};

    // //merge into other vector;
    // vector<int> mrg;
    // for(int i:v1){
    //   mrg.push_back(i);
    // }
    // for(int i:v2){
    //   mrg.push_back(i);
    // }
    // cout<<"Extra Space"<<endl;
    // for(int i:mrg){
    //   cout<<i<<",";
    // }
    // cout<<endl;
    // //merge into v1
    // //resize v1 for v2
    // for(int i:v2){
    //   v1.push_back(i);
    // }
    // for(int i:v1){
    //   cout<<i<<",";
    // }
    int a[]={1,2,3,4};
    int b[]={5,6,7};
    int na=sizeof(a)/sizeof(*a);
    int nb= sizeof(b)/sizeof(*b);
    int n=na;
    for(int i:b){
      a[n]=i;
      n++;
    }
    for(int i=0;i<na+nb;i++){
      cout<<a[i]<<",";
    }

}

