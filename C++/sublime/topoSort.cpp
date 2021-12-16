#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
template<typename T>
class GraphDirected{
public:
      unordered_map<T,list<T>> um;
      void addEdge(T x,T y){
        um[x].push_back(y);
        if(um[y].empty()){
            list<T> l;
            um[y]=l;
        }
      }
      void printGraph(){
        for(auto p:um){
          cout<<p.first<<"\t";
          for(T nbr:p.second){
            cout<<nbr<<",";
          }
          cout<<endl;
        }
      }
      void dfs_helper(T src,unordered_map<T,bool> &visited,list<T> &ordering){
            visited[src]=true;
                  //Neighbor of node
                  for(T nbr:um[src]){
                      if(!visited[nbr]){
                        dfs_helper(nbr,visited,ordering);
                      }
                  }
                ordering.push_front(src);

      }
      void topologySort(){
          unordered_map<T,bool> visited;
            list<T> ordering;
          for(auto p:um){
            visited[p.first]=false;
          }
          for(auto p: um){
            if(!visited[p.first]){
              dfs_helper(p.first,visited,ordering);
            }
          }
          for(T t:ordering){
            cout<<t<<",";
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
      GraphDirected<int> g;
      g.addEdge(1,2);
      g.addEdge(1,3);
      g.addEdge(2,4);
      g.addEdge(3,4);
      //g.printGraph();
      g.topologySort();
   
}

