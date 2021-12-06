#include <stdio.h>
#include<stdlib.h>
int getDigit(int n){
    int count=0;
    while(n){
        count++;
        n=n/10;
    }
    return count;
}

int * intToArray(int n){
    int digits = getDigit(n);
    int *a;
    a=(int*)malloc(sizeof(int)*digits);
    for(int i=0;n;i++){
        a[i]=n%10;
        n=n/10;
    }
    return a;
}
double multiplication(int* a,int sizeA,int* b,int sizeB){

}
int main() {
    int n;
    int m;
    scanf("%d",&n);
    scanf("%d",&m);
    int sizeN = getDigit(n);
    int* a =intToArray(n);
    int sizeM=getDigit(m);
    int* b= intToArray(m);
    for(int i=0;i<sizeN;i++){
        printf("%d,",a[i]);
    }
    printf("\n");
    for(int i=0;i<sizeM;i++){
        printf("%d,",b[i]);
    }
    // to find multiplication of 45 and 37
    //46341 *46341
    // int a[]={1,4,3,6,4};
    // int m= sizeof(a)/sizeof(*a);
    // int result[100];
    // int number;
    // scanf("%d",&number);
    // int i;
    // long int temp=0;
    // for(i=0;i<m;i++){
    //     long int x= a[i]*number +temp;
    //     result[i]=x%10;
    //     temp=x/10;
    // }
    // while(temp){
    //     result[i]=temp%10;
    //     i++;
    //     temp=temp/10;
    // }
    // //Print Result
    // for(int j=i-1;j>=0;j--){
    //     printf("%d",result[j]);
    // }

}
