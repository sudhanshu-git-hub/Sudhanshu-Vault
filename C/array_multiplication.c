#include <stdio.h>
int main() {
    // to find multiplication of 45 and 37
    int a[]={5,4};
    int m= sizeof(a)/sizeof(*a);
    int result[100];
    int number;
    scanf("%d",&number);
    int i=0,temp=0;
    while(i<m){
        int x = a[i]*number +temp;
        result[i]=x%10;
        temp=x/10;
        i++;
    }
    while(temp){
        result[i]=temp%10;
        i++;
        temp=temp/10;
    }
    
    for(int j=i-1;j>=0;j--){
        printf("%d",result[j]);
    }

}
