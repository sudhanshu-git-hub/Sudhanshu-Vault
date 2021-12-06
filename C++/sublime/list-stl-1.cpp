#include <iostream>
#include<list>
#include<algorithm>
#include<vector>
#include<ctime>
using namespace std;

int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    list<string> l{"Mango","Banana","Guava","Apple","Oranges"};
    l.push_back("Pineapple");
    l.push_front("Melon");
    l.sort();
    l.reverse();
    l.push_back("Apple");
    cout<<"Front: "<<l.front()<<endl;
    cout<<"End: "<<l.back()<<endl;
    l.pop_back();
    l.pop_front();
    for(string s:l){
      cout<<s<<"-->";
    }
   
   list<string>::iterator it = l.begin();
   it++;
   it++;
   l.erase(it);
   cout<<endl<<"After Delition "<<endl;
   for(string s:l){
      cout<<s<<"-->";
    }
    //insert at p position
    list<string>::iterator it2= l.begin();
    it2++;
    cout<<endl<<"iterator: -> "<<*(--it2)<<endl;
    //Ierator can points to previous also
    time_t lts = clock();
    l.insert(it2,"Lemon");
    time_t lte = clock();
    cout<<endl<<endl<<"List Time: "<<lte-lts<<"ms"<<endl;
    cout<<endl<<"After Insertion"<<endl;
    for(string s:l){
      cout<<s<<"-->";
    }
    vector<int> v{1,2,3,4,5,6};
    time_t vts = clock();
    v.insert(v.begin()+1,9);
    time_t vte = clock();
    cout<<endl<<endl<<"List Time: "<<vte-vts<<"ms"<<endl;
    for(int i:v){
      cout<<i<<",";
    }
}

