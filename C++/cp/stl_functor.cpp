#include <iostream>
using namespace std;

class sudhanshFunctor{
    public:
    //      method to overload operator
            void operator()(){
                    cout<<"Inside sasha functor"<<endl;
            }
            void operator()(int a){
                    cout<<"Inside sasha param functor"<<a<<endl;
            }
};
int main() {
    sudhanshFunctor sf;
    sf();
    sf(3);
}
