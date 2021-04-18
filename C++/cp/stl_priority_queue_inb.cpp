
#include <iostream>
#include<queue>
#include<vector>
#include<functional>
#define SIZE(a)(sizeof(a)/sizeof(*a))

using namespace std;

int main() {
     int a[] = {2,445,1,6,3,89,7};
    //MAX Heap
  priority_queue<int> maxHeap;
    for(int i=0;i<SIZE(a);i++){
        maxHeap.push(a[i]);
    }
    cout<<"Max Heap"<<endl;
   while(!maxHeap.empty()){
       cout<<maxHeap.top()<<",";
       maxHeap.pop();
   } 

   //Min heap priority_queue<int,container,comparator>
   priority_queue<int,vector<int>,greater<int>> minHeap;
   for(int i=0;i<SIZE(a);i++){
        minHeap.push(a[i]);
    }
    cout<<"\n"<<"Min Heap"<<endl;
   while(!minHeap.empty()){
       cout<<minHeap.top()<<",";
       minHeap.pop();
   } 

}
