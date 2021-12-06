#include <iostream>
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
    queue<int> q;
    for(int i=1;i<=5;i++){
      q.push(i);
    }
    cout<<"Front: "<<q.front()<<" Back: "<<q.back()<<endl;
    
    while(!q.empty()){
      cout<<"Deleted: "<<q.front()<<endl;
      q.pop();
    }
   
}

