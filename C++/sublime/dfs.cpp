#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
template<typename T>
class Graph{
public:
    unordered_map<T,list<T>> um;
    void addEdge(T x,T y){
      um[x].push_back(y);
      um[y].push_back(x);
    }
      void dfs_helper(T src,unordered_map<T,bool> &visited){
        cout<<src<<",";
        visited[src]=true;
        // traverse the non visted neighbour 
        for(T nbr:um[src]){
          if(!visited[nbr]){
            dfs_helper(nbr,visited);
          }
        }
      }
    void dfs(){
      unordered_map<T,bool> visited;
      for(auto p:um){
        visited[p.first]=false;
      }
      int count_connection=0;
      for(auto p:um){
        if(!visited[p.first]){
           cout<<"Graph:"<<count_connection<<"->";
           dfs_helper(p.first,visited);
           cout<<endl;
        }
          count_connection++;
      }
     
    }
    void dfs(T src){
      unordered_map<T,bool> visited;
      for(auto p:um){
        visited[p.first]=false;
      }
      dfs_helper(src,visited);
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
    Graph<int> g;
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(0,3);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.dfs();
    cout<<endl;
    Graph<int> g2;
    g2.addEdge(0,1);
    g2.addEdge(0,3);
    g2.addEdge(0,4);
    g2.addEdge(1,2);
    g2.addEdge(2,3);
    g2.addEdge(5,6);
    g2.addEdge(6,7);
    g2.addEdge(8,8);
    g2.dfs();

   
}

