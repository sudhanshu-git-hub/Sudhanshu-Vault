#include <iostream>
#include<algorithm>
#include<vector>
#define SIZE(a)(sizeof(a)/sizeof(*a))
using namespace std;
int main() {
    int coin[]={1,2,5,10,20,50,100,200,500,2000};
    vector<int> change;
    int money;
    cin>>money;
    
    while(money){
        auto up =upper_bound(coin,coin+SIZE(coin),money);
        up--;
        
        change.push_back(*up);
        money = money-*up;
      
    }
    for(int i=0;i<change.size();i++){
        cout<<change[i]<<" ";
    }

}
