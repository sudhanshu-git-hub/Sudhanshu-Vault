#include <iostream>
#include<deque>
using namespace std;

int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    deque<int> d;
    for(int i=1;i<5;i++){
      d.push_back(i);
    }
    for(int i=5;i<9;i++){
      d.push_front(i);
    }
   for(int i:d){
    auto p= &d[i];
    cout<<i<<","<<"Address: "<<p<<endl;
   }
   cout<<endl<<d[2];

}

