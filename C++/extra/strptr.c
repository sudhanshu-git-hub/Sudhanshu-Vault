#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *name;
    name = (char *)malloc(sizeof(char) * 1000);
    scanf("%[^\n]s", name);
    printf("%s", name);
    int size = sizeof(name) / sizeof(*name);
    //printf("Size of name %d", size);
    //printf("%s",name);
}
