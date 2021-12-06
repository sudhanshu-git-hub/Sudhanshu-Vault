#include <iostream>
#include <list>
using namespace std;
class Graph{
  int V;
  list<int> *l;
  public:
    Graph(int v){
      this->V=v;
      l=new list<int>[V];
    }
    void addEdge(int x,int y){
      l[x].push_back(y);
      l[y].push_back(x);
    }
    void printAdjacencyList(){
      for(int i=0;i<V;i++){
        cout<<"Vertex "<<i<<" : ";
        for(int j:l[i]){
          cout<<j<<",";
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
    Graph g(4);
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.printAdjacencyList();

   
}

