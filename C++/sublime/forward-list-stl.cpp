#include <iostream>
#include<list>
#include<forward_list>
using namespace std;

int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    list<int> l{1,2,3,4,5};
    auto it = l.end();
    it--;
    for(;;it--){
      cout<<*it<<",";
      if(it==l.begin()){
        break;
      }
    }
    cout<<endl;
    forward_list<int> fl{6,7,8,9};
    auto it2 = fl.end();
    // it2++;
    // it2++;
    it2--;
    cout<<*it2;
   
}

