#include <iostream>
#include<unordered_map>
#include <map>
#include<queue>
#include<list>
using namespace std;
template<typename T>
class Graph{
public:
  unordered_map<T,list<T>> m;
  void addEdge(T s,T d){
    m[s].push_back(d);
    m[d].push_back(s);
  }
  void bfs(){  
      map<T,bool> visited;
      queue<T> q;
      for(auto p:m){
            visited[p.first]=false;
      }
      int count=0;
      for(auto p:m){
        if(!visited[p.first]){
          cout<<"Graph "<<count<<"->";
          q.push(p.first);
          visited[p.first]=true;
          while(!q.empty()){
           T node =q.front();
           cout<<node<<",";
           q.pop();
           for(int nbr:m[node]){
              if(!visited[nbr]){
                q.push(nbr);
                visited[nbr]=true;
              }
           }
          }
          count++;
          cout<<endl;
        }
      }
  }
  void bfs(T start){
       map<T,bool> visited;
       queue<T> q;
       q.push(start);
       visited[start] = true;
       while(!q.empty()){
          T node = q.front();
          cout<<q.front()<<",";
          q.pop();
          //neighbour of node
          for(int nbr:m[node]){
            if(!visited[nbr]){
              q.push(nbr);
              visited[nbr]=true;
            }
          }

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
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.bfs(0);
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
    g2.bfs();
}

