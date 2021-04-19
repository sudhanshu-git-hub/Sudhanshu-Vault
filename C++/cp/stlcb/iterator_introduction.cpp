#include <iostream>
#include<list>
#include<vector>
#define SIZE(a)(sizeof(a)/sizeof(*a))

using namespace std;

//Application
template<class ForwardIterator,class T>
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

    /*
        Iterator Introduction

        Iterator as an entity that helps us to access the data within a container with certain restrictions.(Similar to pointer)..
        Input iterator: used for reading data.
        ouptut interator:used for writing data.

        FORWARD iterator: used for read and write in single direcitino only.ex- Single link list
        Bidirectional: forward iterator that can move in both direction. ex- Doubly link list.
        Random Access Iterator: for random accessing data only for array and vector

        APPLICAtion:
        1.Generic algorithm
                - template make algo independent of data type.
                * iterator make algo independent of container type
    */
    int a[]={4,3,8,11,9};
    char b[]={'a','h','n','w'};
    list<int> li;
    li.push_back(4);
    li.push_back(3);
    li.push_back(8);
    li.push_back(11);
    li.push_back(9);

    vector<int> v(a,a+SIZE(a));
    vector<char> v2(b,b+SIZE(b));

    auto it = search(li.begin(),li.end(),363);
    cout<<*it<<endl;
    auto it2 = search(v.begin(),v.end(),3);
    cout<<*it2<<endl;
    auto it3 = search(v2.begin(),v2.end(),'t');
    cout<<*it3<<endl;

}
