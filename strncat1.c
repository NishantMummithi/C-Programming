#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="Hello";
    char s2[]="World";
    printf("%s",s1);
    strncat(s1,s2,3);
    printf("%s",s2);
    return 0;
}
