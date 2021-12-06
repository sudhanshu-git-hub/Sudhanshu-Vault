#include <iostream>
#include <queue>
using namespace std;

int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    priority_queue<int> pq;
    for(int i=1;i<=5;i++){
      pq.push(i);
    }
    while(!pq.empty()){
      cout<<pq.top()<<",";
      pq.pop();
    }
    cout<<endl;
    //min heap
    priority_queue<int ,vector<int>,greater<int>> pqmin;4u80k
    for(int i=5;i>=1;i--){
      pqmin.push(i);
    }
    while(!pqmin.empty()){
      cout<<pqmin.top()<<",";
      pqmin.pop();
    }
    
} 

