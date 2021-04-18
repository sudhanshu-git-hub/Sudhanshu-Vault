#include<bits/stdc++.h>

using namespace std;

class student{

//STRUCTURE
/*  //identifier
    access specifier:
                data-type var-name;

    method
    void fun(){}
*/
    public:
    string name;
    int id;
    int mobile_number;

    string generate_hashcode(){
        string hash = name+ to_string(mobile_number);
        return hash;
    }

};

int main(){

    student student1;
    student1.name="Sudhanshu";
    student1.id=8001;
    student1.mobile_number=801039;

   
    cout<<student1.generate_hashcode();

}