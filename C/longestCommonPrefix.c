#include <stdio.h>
#include<stdlib.h>
 char commonPrefix[200];
  int cSize=0;
char * longestCommonPrefix(char ** strs, int strsSize){
    char compare;
        cSize=0;
      for(int i=0;i<200;i++){
        commonPrefix[i]='\0';
    }
    for(int i=0;strs[0][i]!='\0';i++){
        compare=strs[0][i];
        for(int j=0;j<strsSize;j++){
            if(strs[j][i]!=compare){
               return commonPrefix;
            }
           
        }
        printf("%c,",compare);
        commonPrefix[cSize]=compare;
        cSize++;
    }
    return commonPrefix;
}
int main() {
    char** strs;
    int n;
     char* s;
    scanf("%d",&n);
    strs=(char**)malloc(sizeof(char*)*n);
    for(int i=0;i<n;i++){
       s=(char*)malloc(sizeof(char)*200);
        scanf("%s",s);
        *(strs+i)=s;
    }
    printf("%s",longestCommonPrefix(strs,n));

}
