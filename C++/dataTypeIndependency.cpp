#include <iostream>
using namespace std;
//Data type independance
template<typename T>
//template<class T>
bool search(T a[],int n,T key){
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

int main() {

        int num[]={1,2,3,7,9,1,9,4};
        char name[]={'s','u','d','h','a','n','s','h','u'};
        int size = sizeof(num)/sizeof(*num);
        int nameLength= sizeof(name)/sizeof(*name);

        if(search(name,nameLength,'t')){
            cout<<"Found";
        }
        else{
            cout<<"Not found";
        }
}
