
#include<bits/stdc++.h>
using namespace std;

#define PB push_back

vector<vector<bool>> dpTable;

void initializeDpTable(int row,int column){
        for(int i=0;i<row;i++){
            vector<bool> temp;
            for(int j=0;j<column;j++){
                temp.PB(false);
            }
            dpTable.PB(temp);
        }
}

void printDpTable(){
    for(int i=0;i<dpTable.size();i++){
        for(int j=0;j<dpTable[i].size();j++){
            cout<<dpTable[i][j]<<" ";
        }
        cout<<"\n";
    }
}
void subsetSum(vector<int> set,int sum){
        for(int i=0;i<=set.size();i++){
            vector<bool> temp;
            for(int j=0;j<=sum;j++){
                if(j==0){
                   temp.PB(true);
                }
                else if(i==0&&j>0){
                    temp.PB(false);
                }
                else if(set[i-1]>j){
                    temp.PB(dpTable[i-1][j]);
                }
                else if(set[i-1]==j){
                    temp.PB(true);
                }
                else{
                    temp.PB(dpTable[i-1][j-set[i-1]]||dpTable[i-1][j]);
                }
            }
            dpTable.PB(temp);
        }

}

int main(){
    int input;
    int sum;
    vector<int> set;
   ios::sync_with_stdio(0);
   cin.tie(0);

   cin>>sum;
   while(cin>>input){
       set.PB(input);
   }
    //initializeDpTable(set.size()+1,sum+1);
    subsetSum(set,sum);
    printDpTable();
}
