#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(string a,string b){
      if(a.length()==b.length()){
        return a<b;
      }
    return a.length()>b.length();
}
int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    int n;
    cin>>n;
    string a[n];
    // cin.get(); 
    // for(int i=0;i<n;i++){
    //   getline(cin,a[i]);
    // }
    // for(string s:a){
    //   cout<<s<<",";
    // }

    vector<string> v{"Orange","Pineapple","Guava","Apple","Mango"};
    //Lexiographic Sort
    sort(v.begin(),v.end(),cmp);

    for(string s:v){
      cout<<s<<",";
    }
}

