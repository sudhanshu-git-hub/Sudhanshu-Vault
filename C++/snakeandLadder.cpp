#include <iostream>
#include<list>
#include<unordered_map>
using namespace std;
template<typename T>
class GraphSnL{
public:
    unordered_map<T,list<T>> um;
    void addEdge(T x,T y){
        um[x].push_back(y);
    }
    void printGraph(){
      for(auto p:um){
        cout<<p.first<<"\t";
        for(T t: p.second){
          cout<<t<<",";
        }
         cout<<endl;
      }
    }
};
int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    GraphSnL<int> g;
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,1);
    g.printGraph();
   
}

