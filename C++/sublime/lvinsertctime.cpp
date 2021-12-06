#include <iostream>
#include<ctime>
#include<list>
#include<vector>
using namespace std;
int main() {
    list<int> l(100000,0);
    vector<int> v(100000,0);
    time_t lts = clock();
    auto itl = l.begin();
    // for(int i=1;i<9999;i++){
    //     itl++;
    // }
    
    l.insert(itl,40);
    time_t lte = clock();
    cout<<"Time List: "<<lte-lts<<"ms"<<endl;
    time_t vts = clock();
    v.insert(v.begin(),40);

    time_t vte = clock();
    cout<<"Time : Vector:"<<vte-vts<<"ms"<<endl;

}
