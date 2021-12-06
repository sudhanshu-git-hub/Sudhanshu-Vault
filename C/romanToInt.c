#include <stdio.h>
#include<stdlib.h>
void check_pair(int *a,int *b){
    if(*a<*b){
        *a=0-*a;
    }
}
int RomanToInteger(char c){
    switch(c){
        case 'I':
        return 1;
        break;
        case 'V':
        return 5;
        break;
        case 'X':
        return 10;
        break;
        case 'L':
        return 50;
        break;
        case 'C':
        return 100;
        break;
        case 'D':
        return 500;
        break;
        case 'M':
        return 1000;
        break;
    }
    return 0;
}
void manipulate_string(char * s){
    int number =0;
    int a[20];
    int i=0;
    while(s[i]!='\0'){
        int digitToIntd = RomanToInteger(s[i]);
        //printf("%d,",digitToIntd);
        a[i]=digitToIntd; 
        i++;
    }
    printf("\n");
    for(int j=0;j<i-1;j++){
        check_pair(&a[j],&a[j+1]);
        
        //number+=a[j];
    }
    for(int j=0;j<i;j++){
        printf("%d,",a[j]);
        number+=a[j];
    }
    printf("\nNumber:= %d",number);
}

int main() {
    char* s;
    int n=4;
    s=(char*)malloc(sizeof(char)*n);
    scanf("%s",s);
    manipulate_string(s);
}
