#include <iostream>
#include<list>
#include<unordered_map>
#include<queue>
#include <map>
#include <vector>
using namespace std;
template<typename T>
class GraphSnL{
public:
    map<T,list<T>> um;
    void addEdge(T x,T y){
        um[x].push_back(y);
        if(!um[y].empty()){
          list<T> l;
          um[y]=l;
        }
        
    }
    void bfsSSP(T src,T des){
      map<T,int> distance;
      map<T,T> parent;
      for(auto p:um){
        distance[p.first]=INT_MAX;
      }
      distance[src]=0;
      queue<T> q;
      q.push(src);
      parent[src]=src;
        while(!q.empty()){
          T node = q.front();
          q.pop();
          for(T nbr: um[node]){
              if(distance[nbr]==INT_MAX){
                distance[nbr]=distance[node]+1;
                q.push(nbr);
                parent[nbr]=node;
              }
          }
        }

        for(auto p:distance){
          cout<<p.first<<"\t"<<p.second<<endl;
        }
        T temp =des;
        while(temp!=src){
          cout<<temp<<"<--";
          temp=parent[temp];
        }
        cout<<src;
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
    vector<int> board(36,0);
    board[2]=13;
    board[5]=2;
    board[9]=18;
    board[18]=11;
    board[17]=-13;
    board[20]=-14;
    board[24]=-8;
    board[25]=10;
    board[32]=-2;
    board[34]=-22;

    GraphSnL<int> g;
    for(int v=0;v<=36;v++){
      for(int dice =1;dice<=6;dice++){
          int j =v+dice;
          j=j+board[j];
          if(j<=36){
            g.addEdge(v,j);
          }
      }
      
    }
    g.addEdge(36,36);
    //g.printGraph();
    g.bfsSSP(0,36);
   
}

