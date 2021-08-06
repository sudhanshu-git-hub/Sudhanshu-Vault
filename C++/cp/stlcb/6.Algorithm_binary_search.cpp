
//#include<bits/stdc++.h>
#include <iostream>
#include<algorithm>
#define SIZE(a)(sizeof(a)/sizeof(*a))
using namespace std;
int main() {
  int a[]={1,2,2,2,2,3,3,4,7,9,15};
  int n= SIZE(a);
  //binary_search: Binary search works on sorted containers 
  //Complexity: O(logn)
  //bool return type
  int key;
  cin>>key;
  bool search = binary_search(a,a+n,key);
    if(search){
        cout<<"present"<<"\n";
    }
    else{
        cout<<"absent!"<<"\n";
    }

    /*
    1.lower_bound: gives address of first occurence of key
            Comp:O(logn)
            return type: iterator
                if key is present than gives iterator to the first occurence
                        else------ absent than gives iterator to the first occurence of element which is just greator than key.
    */
    //----------------------------------------------------------------------------------------------------------------------//
    /*
        2.upper_bound: give the address of element which next to last occurence of key.
                        Comp: O(logn)
                        return type: iterator
                            if key is absent----- address of element which just greator than key
    */

                //# if element is absent then upper_bound==lower_bound;
    int key2;
    cin>>key2;
    int* lower = lower_bound(a,a+n,key2);
    int* upper = upper_bound(a,a+n,key2);
    if(upper!=lower){

            int lb_index = lower-a;
            int ub_index = upper -a-1;
            cout<<"lower_bound: "<<lower<<"\n";
            cout<<"upper_bound: "<<upper<<"\n";
            cout<<"Lower bound of :"<<key2<<" is "<<lb_index<<"\n";
            cout<<"Upper bound of :"<<key2<<" is "<<ub_index<<"\n";
            cout<<"Number of times occurence is "<<upper-lower;
    }
    else{
        cout<<"absent! #ref:Boundaries"<<"\n";
    }
}
