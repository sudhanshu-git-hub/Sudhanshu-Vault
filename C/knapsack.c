
#include <stdio.h>
#include<stdlib.h>

int Max(int a,int b){
   return (a>b)?a:b;
}

int knapsack(int n,int *weight,int *profit,int capacity){
    //No item is left 
    //bag is full
    if(capacity==0||n==0){
        return 0;
    }

    //weight of item is capacity left
    else if(weight[n-1]>capacity){
        return knapsack(n-1,weight,profit,capacity);
    }
    //
    else{
        return Max(knapsack(n-1,weight,profit,capacity), profit[n-1]+knapsack(n-1,weight,profit,capacity-weight[n-1]));
    }
}

int main() {
    int n,*weight,*profit,capacity;
    scanf("%d",&n);
    weight =(int*) malloc(n*sizeof(int));
    profit =(int*) malloc(n*sizeof(int));

    for(int i=0;i<n;i++)
    scanf("%d",&weight[i]);

    for(int i=0;i<n;i++)
    scanf("%d",&profit[i]);
    
    scanf("%d",&capacity);

    printf("Maximum profit=%d",knapsack(n,weight,profit,capacity));
    // printf("%d\n",n);
    // for(int i=0;i<n;i++)
    // printf("%d",weight[i]);
    //  printf("\n");
    // for(int i=0;i<n;i++)
    // printf("%d",profit[i]);
    // printf("\n");
    // printf("%d",capacity);


}
