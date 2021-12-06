#include <iostream>
#include<vector>
using namespace std;

int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    vector<int> v{1,2,3,4,5,6,7,9};
    int start =0;
    int end = v.size()-1;
    int key;
    cin>>key;
    while(start<=end){
      int mid = (start+end)/2;
      if(v[mid]==key){
        cout<<"Found "<<key<<" at index : "<<mid;
        return 1;
      }
      else if(v[mid]>key){
        end= mid-1;
      }
      else{
        start= mid+1;
      }
    }
    cout<<"Not Found";
   
}

