#include <iostream>
#include<unordered_map>
#include<list>
using namespace std;
class Graph{
  unordered_map<string,list<pair<string,int>>> l;
  public:
    void addEdge(string source,string destination,bool bidir,int wt){
      l[source].push_back(make_pair(destination,wt));
      if(bidir){
        l[destination].push_back(make_pair(source,wt));
      }
    }
    void printGraph(){

      for(auto p:l){
        string source= p.first;
        //cout<<"City: "<<source;
        list<pair<string,int>> destination = p.second;
        for(auto d : destination){
          cout<<source<<" - "<<d.first<<" "<<d.second<<" KM"<<endl;
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
    Graph g;
    g.addEdge("A","B",true,20);
    g.addEdge("A","D",true,50);
    g.addEdge("A","C",true,10);
    g.printGraph();
   
}

