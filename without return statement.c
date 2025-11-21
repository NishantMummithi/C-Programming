#include<stdio.h>
void add();
void add()
{
    int a,b,sum;
    printf("Enter a and b values:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum=%d\n",sum);
}
int main()
{
    add();
    return 0;
}
