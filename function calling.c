#include<stdio.h>
int add(int,int);
int main()
{
    int x,y,sum;
    printf("Enter x and y values:");
    scanf("%d%d",&x,&y);
    sum=add(x,y);
    printf("Sum=%d\n",sum);
    return 0;
}
int add(int a,int b)
{
    return a+b;
}
