#include <iostream>
using namespace std;
float sqrt(int n,int precision){
    float ans;
    int start =1;
    int end = n;
    //least integer find 
    while(start<=end){
        int mid =(start+end)/2;
        if(mid*mid==n){
            ans = mid;
            return ans;
        }
        else if(mid*mid>n){
            end=mid-1;
        }
        else if(mid*mid<n){
            start=mid+1;
            ans=mid;
        }
    }
    //precision
    float increament =0.1;
    for(int i=0;i<precision;i++){
        while(ans*ans<=n){
            ans+=increament;
        }
        ans = ans-increament;
        increament=increament/10;
    }
    return ans;
}
int main() {
   int n =5;
   int precision =4;
   cout<<"The square root of "<<n<<" is "<<sqrt(n,6);
   

}
