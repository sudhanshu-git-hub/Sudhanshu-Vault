
#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;
bool comparator(string a,string b){
    return a.length()<b.length();
}
int main(){
   string s("Suhdanshdu");
   //cout<<s<<"\n";

   string s2="Singh";
  // cout<<s2<<"\n";

   string s3;
    getline(cin,s3);
    //cout<<s3<<"\n";

   string s4[]={"sudhanshu","andydfadaxc","candyda","maddy"};
    int n = sizeof(s4)/sizeof(string);

    //lexographically sort
    //sort(s4,s4+n);

    //sorting according to length
    //custom comparator compare two string according to length
    sort(s4,s4+n,comparator);

   for(int i=0;i<n;i++){
       cout<<s4[i]<<"\n";
    }
    
   }
