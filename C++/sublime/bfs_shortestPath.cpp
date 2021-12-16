#include <iostream>
#include<unordered_map>
#include<map>
#include<list>
#include<queue>
using namespace std;
template<typename T>
class Graph{
public:
    unordered_map<T,list<T>> um;
    void addEdge(T x,T y){
      um[x].push_back(y);
      um[y].push_back(x);
    }
    void bfsShortestPath(T source){
        map<T,int> distance;
        queue<T> q;
        for(auto pair: um){
          T node = pair.first;
          distance[node] =INT_MAX;
        }
        distance[source] =0;
        q.push(source);
        while(!q.empty()){
          T node = q.front();
          q.pop();
            //neighbour of node
          for(T nbr: um[node]){
            if(distance[nbr]==INT_MAX){
              q.push(nbr);
              distance[nbr] =distance[node]+1;
            }
          }

        }
        for(auto p:distance){
          cout<<"Distance from: "<<source<<" To: "<<p.first<<" = "<<p.second<<endl;
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
    Graph<int> g;
    g.addEdge(0,3);
    g.addEdge(3,4);
    g.addEdge(0,1);
    g.addEdge(2,3);
    g.addEdge(4,5);
    g.addEdge(1,2);
    g.bfsShortestPath(0);
   
}

