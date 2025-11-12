#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="ABCD";
    char s2[]="ABCE";
    int res;
    res=strcmp(s1,s2);
    if(res==0)
    {
        printf("teo strings are equal");
    }
    else if(res<0)
    {
        printf("%s is smaller than %s",s1,s2);
    }
    else
    {
        printf("%s is larger than %s",s1,s2);
    }
    return 0;
}
