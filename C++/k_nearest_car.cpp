
#include <iostream>
#include<queue>

#define SIZE(a)(sizeof(a)/sizeof(*a))
using namespace std;
class Car{
    public: 
        int id;
        int x;
        int y;
        
    //Constructor
    Car(int id,int x,int y){
        this->id=id;
        this->x=x;
        this->y=y;
    }
    //distance from origin
    int distance(){
        //compare sqrt(a,b)_= a,b;

        return x*x + y*y;
    }
    void print(){
        cout<<"ID: "<<id<<" Location:"<<x<<","<<y<<" Distance:"<<distance()<<endl;
    }
};

class carCompare{
    public:
        bool operator()(Car a,Car b){
            return a.distance()> b.distance();
        }
};


int main() {
    /*Problem K-nearest Car
    Given coordinate of cars (x,y) and its id
    you are the standing at origin and find the k nearest to you in terms of distance
    
    Solution 1: Find the distance from origin and sort according to distance
    Time Complexity: O( distance[constant] + sort[nlogn quicksort] + k)= O(nlogn);

    Solution 2: Insert the car in priority queue(min heap) acc to distance and delete the k cars from top;
    Time Complexity: O( distance[constant] + minHeap_Insertion(Heapify:LogN) + deletion_k_cars(klogn) )= O(klogn);

    ------------Conclusion-------------------
    if n=1000 k=3
    then klogn<nlogn;
    therefore soltion 2 is optimal;

    */

    //Cordinates of car
    int x[]={5,7,1,99,33,77,-4,-7,-3,-2,2,6,1};
    int y[]={4,-4,6,2,5,7,7,98,5,4,2,6,1};
   
   //Min heap
   priority_queue<Car,vector<Car>,carCompare> minHeap;
    for(int i=0;i<SIZE(x);i++){
        Car c(i,x[i],y[i]);
        //Insert into minHeap param distance
        minHeap.push(c);
       
    }
    int k;
    cin>>k;

    while(!minHeap.empty()&&k){
        Car car = minHeap.top();
        car.print();
        minHeap.pop();
        k--;
    }
}
