#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Hello";
    char s2[]="World";
    printf("%s",s1);
    strcpy(s1,s2);
    printf("%s",s1);
    return 0;
}
