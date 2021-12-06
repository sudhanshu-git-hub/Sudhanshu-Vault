#include <iostream>
#include<vector>
#include<queue>
using namespace std;

int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    int k;
    k=3;
    vector<int> v{100,3,66,2,34,2,88,6,77,53,53,2,4,5,1,77,91,99};
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i:v){
      if(pq.size()<3){
        pq.push(i);
      }
      else{
        if(i>pq.top()){
          pq.pop();
          pq.push(i);
        }
      }
    }
    for(;!pq.empty();){
      cout<<pq.top()<<",";
      pq.pop();
    }
   
}

