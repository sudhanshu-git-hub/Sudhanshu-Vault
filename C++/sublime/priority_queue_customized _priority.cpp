#include <iostream>
#include <queue>
int count=0;
using namespace std;
class Person{
  public:
    string name;
    int age;
  
    Person(string name,int age){
        this->name = name;
        this->age=age;
    }
};
class personCompare{
    public:
      bool operator()(Person A,Person B){
            cout<<count<<endl;
            count++;
          return A.age<B.age;
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
    // Priority in queue with respect to age
    priority_queue<Person,vector<Person>,personCompare> pq;
    Person p1("Sudhanshu",21);
    Person p2("ABc",22);
    Person p3("Ary",39);
    Person p4("ljo",56);
    Person p5("Dmr",80);
    Person p6("aero",12);
    pq.push(p1);
    pq.push(p2);
    pq.push(p3);
    pq.push(p4);
    pq.push(p5);
    pq.push(p6);
      while(!pq.empty()){
        Person p=pq.top();
        cout<<"Name: "<<p.name<<" Age: "<<p.age<<endl;
        pq.pop();
      }
   
}

