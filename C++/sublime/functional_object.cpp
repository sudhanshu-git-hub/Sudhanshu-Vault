#include <iostream>
using namespace std;
class fun{
public:
  void operator()(){
    cout<<"Inside operator overloading"<<endl;
  }
  void operator()(string s){
    cout<<"inside operator string: "<<s<<endl;
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
    fun f;
    f();
    f("Sudhanshu");
}

