#include <iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<unordered_map>
using namespace std;
class GraphMatrix{
        public:
        vector<int> vertices;
        vector<vector<int>> edges;
        GraphMatrix(vector<int> v){
                for(int i:v){
                    vertices.push_back(i);
                }
               for(int i:v){
                   vector<int> temp;
                   for(int j:v){
                       temp.push_back(0);
                   }
                   edges.push_back(temp);
               }
        }
        void addEdge(int a,int b,bool bidirection){
                auto itA = find(vertices.begin(),vertices.end(),a);
                int indexA = itA-vertices.begin();
                auto itB = find(vertices.begin(),vertices.end(),b);
                int indexB = itB-vertices.begin();
                if(bidirection){
                    edges[indexA][indexB]=1;
                    edges[indexB][indexA]=1;
                }
                else{
                     edges[indexA][indexB]=1;
                }

        }
        void PrintGraph(){
            cout<<"  ";
            for(int i:vertices){
                    cout<<i<<" ";
            }
            cout<<endl;
            int count =0;
            for(vector<int> e:edges){
                cout<<vertices[count]<<" ";
                for(int i:e){
                    cout<<i<<" ";
                }
                cout<<endl;
                count++;

            }
        }
};
class GraphEdgeList{
    public:
    vector<int> vertices;
    vector<pair<int,int>> edgeList;
    GraphEdgeList(vector<int> v){
            for(int i:v){
                vertices.push_back(i);
            }
    }
    void addEdge(int a,int b,bool bidirection){
        if(bidirection){
            pair<int,int> p;
            p.first=a;
            p.second=b;
            edgeList.push_back(p);
             p.first=b;
            p.second=a;
            edgeList.push_back(p);
        }
        else{
            pair<int,int> p;
            p.first=a;
            p.second=b;
            edgeList.push_back(p);
        }
    }
    void PrintGraph(){
        cout<<"vertices: ";
        for(int i:vertices){
            cout<<i<<",";
        }
        cout<<endl<<"edgeList ";
        for(auto p: edgeList){
            cout<<"("<<p.first<<","<<p.second<<"),";
        }
    }
};
class GraphAdjacencyArrayList{
    public:
        int v;
        list<int> *l;
        GraphAdjacencyArrayList(int v){
                this->v=v;
                l= new list<int>[v];
        }
        void addEdge(int a,int b,bool bidirection){
                if(bidirection){
                    l[a].push_back(b);
                    l[b].push_back(a);
                }
                else{
                    l[a].push_back(b);
                }
        }
        void PrintGraph(){
            for(int i=0;i<v;i++){
                cout<<i<<" ";
                for(int j:l[i]){
                    cout<<j<<",";
                }
                cout<<endl;

            }
        }

};
class Graph{
    public:
        unordered_map<string,list<pair<string,int>>> m;
        void addEdge(string x,string y,bool bidirection,int wt){
           if(bidirection){
               m[x].push_back(make_pair(y,wt));
               m[y].push_back(make_pair(x,wt));
           }
           else{
               m[x].push_back(make_pair(y,wt));
           }
        }
        void PrintGraph(){
            for(auto p:m){
                cout<<"Source: "<<p.first;
                list<pair<string,int>> destinations = p.second;
                for(auto d: destinations){
                    cout<<"("<<d.first<<","<<d.second<<"),";
                }
                cout<<endl;
            }
        }
};
int main() {
        vector<int> v{0,1,2,3};
        GraphMatrix g(v);
        g.addEdge(0,1,true);
        g.addEdge(1,2,true);
        g.addEdge(2,0,true);
        g.addEdge(3,2,true);
        cout<<"Matrix"<<endl;
        g.PrintGraph();
        cout<<endl;

        cout<<"Edge List:"<<endl;
        GraphEdgeList g2(v);
        g2.addEdge(0,1,true);
        g2.addEdge(1,2,true);
        g2.addEdge(2,0,true);
        g2.addEdge(3,2,true);
        g2.PrintGraph();
           cout<<endl;
           cout<<endl;

         cout<<"Adajency ArrayList:"<<endl;
        GraphAdjacencyArrayList g3(4);
        g3.addEdge(0,1,true);
        g3.addEdge(1,2,true);
        g3.addEdge(2,0,true);
        g3.addEdge(3,2,true);
        g3.PrintGraph();
        
        cout<<endl;
        cout<<endl;

        cout<<"AdajencyList:"<<endl;
        Graph g4;
        g4.addEdge("0","1",true,3);
        g4.addEdge("1","2",true,5);
        g4.addEdge("2","0",true,7);
        g4.addEdge("3","2",true,9);
        g4.PrintGraph();


}
