#include <iostream>
#include<stack>
using namespace std;

int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    stack<int> s;

    for(int i=0;i<5;i++){
      s.push(i);
    }
    cout<<"Size: "<<s.size()<<endl;
    cout<<"Top: "<<s.top()<<endl;
    s.pop();
    cout<<"Size: "<<s.size()<<endl;
    cout<<s.empty();
   
}

