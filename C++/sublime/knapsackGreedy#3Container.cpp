#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
template<typename T>
void swap(T *a,T *b){
    T temp = *a;
    *a=*b;
    *b=temp;
  }
  
void bubblesort(vector<float> &pbyw,vector<int> &profit,vector<int> &weight){
        for(int i=0;i<pbyw.size();i++){
          for(int j=0;j<pbyw.size()-1-i;j++){
              if(pbyw[j]<pbyw[j+1]){
                swap(&pbyw[j],&pbyw[j+1]);
                swap(&profit[j],&profit[j+1]);
                swap(&weight[j],&weight[j+1]);
              }
          }
        }
}
int main() {
  
  #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
  #endif

   //------------------CODE--------------
    int n,temp,capacity;
    cin>>n;
    vector<int> profit;
    for(int i=0;i<n;i++){
            cin>>temp;
            profit.push_back(temp);
    }

    vector<int> weight;
     for(int i=0;i<n;i++){
            cin>>temp;
            weight.push_back(temp);
    }
    cin>>capacity;
    vector<float> pbyw;
    for (int i = 0; i < n; i++)
    {
      float t = (float)profit[i]/weight[i];
      pbyw.push_back(t);
    }
      bubblesort(pbyw,profit,weight);
    // for(int i:profit){
    //   cout<<i<<"\t";
    // }
    // cout<<endl;
    // for(int i:weight){
    //   cout<<i<<"\t";
    // }
    // cout<<endl;
    //  for(float i:pbyw){
    //   cout<<i<<"    ";
    // }
    //cout<<endl;
    //Knapsack Logic Greedy about both profit and weight
    float maxProfit=0;
    for(int i=0;i<pbyw.size();i++){
        if((capacity>0) &&  (weight[i]<=capacity)){
          capacity = capacity-weight[i];
          maxProfit= (float)(maxProfit+ profit[i]);
          //cout<<"Non i:"<<i<<endl;
          continue;
        }
        if(capacity>0){
          //cout<<"Ni:"<<i<<endl;
            maxProfit = (float)(maxProfit + profit[i]*(float)capacity/weight[i]);
            break;
        }
    }
    
   cout<<"Maximum Profit: "<<maxProfit;
}

