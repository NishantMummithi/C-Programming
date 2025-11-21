#include<stdio.h>
void add(int,int);
void add(int a,int b)
{
    printf("Sum=%d\n",a+b);
}
int main()
{
    int a,b;
    printf("Enter a and b values:");
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
}
