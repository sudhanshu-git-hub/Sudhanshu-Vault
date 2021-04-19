
#include <iostream>
#include<unordered_map>
#include<cstring>

using namespace std;

int main() {

    unordered_map<string,int> m;
    //insert 
    m["Apple"]=100;
    m.insert(make_pair("Mango",200));

    //search using count
    if(m.count("Apple")){
        cout<<m["Apple"]<<endl;
    }
    //search using iterator
    auto f = m.find("Mango");
    if(f!=m.end()){
        cout<<(f->first)<<endl;
        cout<<(f->second)<<endl;
    }
}
