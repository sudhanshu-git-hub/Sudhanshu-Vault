#include <iostream>
#include<list>
using namespace std;
//Data type independance
template<typename T>
//template<class T>
bool search2(T a[],int n,T key){
        for(int i=0;i<n;i++){
            if(a[i]==key)
                return true;
        }
        return false;
}
// template<class T>
// int size(T a[]){
//     int size = sizeof(a)/sizeof(*a);
//     return size;
// }

template<typename T,class ForwardIterator>
ForwardIterator search(ForwardIterator start,ForwardIterator end,T key){
    while(start!=end){
        if(*start==key){
            return start;
        }
        start++;
    }
    return end;
}
int main() {

        int num[]={1,2,3,7,9,1,9,4};
        char name[]={'s','u','d','h','a','n','s','h','u'};
        int size = sizeof(num)/sizeof(*num);
        int nameLength= sizeof(name)/sizeof(*name);
        list<int> l;
        l.push_back(1);
        l.push_back(4);
        l.push_back(9);

        if(search(l.begin(),l.end(),1)!=l.end()){
            cout<<"Found";
        }
        else{
            cout<<"Not found";
        }
        // if(search2(name,nameLength,'t')){
        //     cout<<"Found";
        // }
        // else{
        //     cout<<"Not found";
        // }
}
