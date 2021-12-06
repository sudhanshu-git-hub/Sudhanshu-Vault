#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt

    freopen("output.txt", "w", stdout);
  #endif

   //Code
   vector<int> v{6,5,1,6,1,3};
   int result=0;
   // XOR
   for(int i:v){
    result^=i;
   }
   cout<<result;
   //where first SET BIT is LSB is 1;
   int pos=0;
   while(result>0){
    if(result&1){
      break;
    }
    pos++;
    result=result>>1;
   }
   cout<<"POS"<<pos<<endl;
   int mask= 1<<pos;
   vector<int> first;
   vector<int> second;

   for(int i:v){
      if(mask&i){
        first.push_back(i);
      }
      else{
        second.push_back(i);
      }
   }
   int f=0;
   for(int i:first){
    //cout<<i<<",";
    f^=i;
   }
   //cout<<"First Number = "<<f<<endl;
   cout<<endl;
   int s=0;
   for(int i:second){
     //cout<<i<<",";
    s^=i;
   }
   cout<<"Unique Numbers = "<<f<<","<<s<<endl;
   cout<<"Repeated Numbers :";
   for(int i:v){
    if(i!=f&&i!=s){
      cout<<i<<",";
    }
   }

}

