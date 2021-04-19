#include <iostream>
#include<list>
#include<vector>
using namespace std;
class Book{
    public:
            string name;
            int price;

    Book(string name,int price){
        this->name=name;
        this->price=price;
    } 

};

class BookCompare{
        public:
            bool operator()(Book A,Book B){
            if(A.name==B.name){
                return true;
            }
            return false;
        }
};
//template + iterator + comparator
template<class ForwardIterator,class T,class Compare>
ForwardIterator search(ForwardIterator start,ForwardIterator end,T key,Compare cmp){
    while(start!=end){
        if(cmp(*start,key)){
            return start;
        }
        start++;
    }
    return end;
}

int main() {

    //Compartor used for comparing on user defined parameter ex- searching on user defined data types.

    Book b1("c++",100);
    Book b2("java",110);
    Book b3("python",120);

    Book booktofind("c++",110);//new edition therefore name has to be search parameter here;

    //list<Book> l;
    vector<Book> l;//generic algo work irrespective of container type.
    l.push_back(b1);
    l.push_back(b2);
    l.push_back(b3);
    BookCompare cmp;
    auto it = search(l.begin(),l.end(),booktofind,cmp);
    if(it!= l.end()){
        cout<<"Book found";
    }
    else{
        cout<<"Book not found";
    }

}
