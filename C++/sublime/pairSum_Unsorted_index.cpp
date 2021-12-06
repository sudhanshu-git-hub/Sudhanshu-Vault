#include <iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
     vector<int> v{14,2,3,5,6,2,5,8,2,1};
    //find all indices of 2
    // sort(v.begin(),v.end());
    // for(int i:v){
    //     cout<<i<<",";
    // }

    // auto it = find(v.begin(),v.end(),2);
    // auto low = lower_bound(v.begin(),v.end(),2);
    // auto up = upper_bound(v.begin(),v.end(),2);

    // cout<<endl<<"Index: "<<(it-v.begin())<<endl;
    // cout<<"Lower: "<<(low-v.begin())<<endl;
    // cout<<"Upper: "<<(up-v.begin()-1)<<endl;

     map<int,vector<int>> m;
    for(int i=0;i<v.size();i++){
        m[v[i]].push_back(i);
    }

    for(auto p:m){
        cout<<"Number: "<<p.first<<"\t";
        for(int i:p.second){
            cout<<i<<",";
        }
        cout<<endl;
    }
    int sum =11;
    vector<int> indices;
   auto f = m.begin();
   auto l = m.end();
   --l;
   while(f->first<l->first){
    int pairSum = f->first + l->first;
        if(pairSum==sum){
                cout<<"F:"<<f->first<<" L: "<<l->first<<endl;
               while(!f->second.empty() && !l->second.empty()){
                   indices.push_back(f->second.front());
                   f->second.erase(f->second.begin());
                   indices.push_back(l->second.front());
                   l->second.erase(l->second.begin());
               }

          //index in vector
            // while(f->second){
              
            // }
            ++f;
            --l;
        }
        else if(pairSum>sum){
          --l;
        }
        else{
          ++f;
        }

   }
    for(int i:indices){
        cout<<i<<",";

    }


}

