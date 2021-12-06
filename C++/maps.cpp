#include <iostream>
#include<map>
#include<string>
using namespace std;
int main() {
    map<string,int> m;

    //Insertion
    //1.
    m["Banana"]=20;
    //2.
    m.insert(make_pair("Watermelon",30));
    //3.
    pair<string,int> p;
    p.first="Pineapple";
    p.second=60;
    m.insert(p);
    //Userinput
    int n;
    cin>>n;
    for(;n;n--){
        string key;
        int value;
        cin>>key;
        cin>>value;
        m.insert(make_pair(key,value));
    }
    // UPDATE
    m["Banana"]=30;
    //aadding
     m["Banana"]+=30;

    //DELTE
    m.erase("Kiwi");


    //traverse
    //1.
    // for(auto it =m.begin();it!=m.end();it++){
    //     cout<<"key: "<<(*it).first<<" Value: "<<it->second<<endl;
    // }
    //2.
    for(auto p:m){
        cout<<"key: "<<p.first<<" Value: "<<p.second<<endl;
    }
   
}
