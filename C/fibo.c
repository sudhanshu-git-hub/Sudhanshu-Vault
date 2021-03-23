#include<stdio.h>
#include<limits.h>


int fibonacci(int n){
    if(n<=1){
        return n;
    }
    else{
     return fibonacci(n-1) + fibonacci(n-2);
     }
}

int dpFibonacci(int n){
        long dpTable[n];
        dpTable[0]=0;
        dpTable[1]=1;
        for(int i=2;i<=n;i++){
            dpTable[i]=dpTable[i-1]+ dpTable[i-2];
        }
        return dpTable[n];
        
}

void main(){
    int n;
    int selection;
    scanf("%d %d",&n,&selection);
    switch(selection){
        case 1:
        printf("%d",fibonacci(n));
        break;
        case 2:
        printf("%d",dpFibonacci(n));
    }
   //printf("\n%ld",LONG_MAX);
}