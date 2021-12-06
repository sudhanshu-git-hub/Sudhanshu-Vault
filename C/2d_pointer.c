#include <stdio.h>
#include<stdlib.h>
int main() {
    int** a;
    int r,c;
    scanf("%d %d",&r,&c);
    a=(int**)malloc(sizeof(int**)*r);
    for(int i=0;i<r;i++){
        *(a+i)=(int*)malloc(sizeof(int)*c);
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            *(*(a+i)+j)=i;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",*(*(a+i)+j));
        }
        printf("\n");
    }
}
