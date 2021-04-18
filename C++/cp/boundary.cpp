
#include <iostream>
#include <vector>
#include<algorithm>

#define Num(a)(sizeof(a)/sizeof(*a))


using namespace std;
//Find the count of occurence of particular element in a array;

int main() {
    int elements[]={20,21,20,10,30,21,10,20,20,30,30,40};
    vector<int> v(elements,elements+Num(elements));
    sort(v.begin(),v.end());

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    int n;
    cin>>n;
    //vector<int>::iterator up,low;
    //up = upper_bound(v.begin(),v.end(),n);
    //cout<<"Iterator:"<<*up<<"\n";
    //cout<<lower_bound(v.begin(),v.end(),n)<<"\n";
    int occur = upper_bound(v.begin(),v.end(),n) - lower_bound(v.begin(),v.end(),n);
    cout<<"\n"<<occur;
    

}
