#include<stdio.h>
int main()
{
  int X;
  int total;
  scanf("%d%d",&X,&total);
  total=4*X;
  if(total<=1000)
{
    printf("YES");
}
else
{
    printf("NO");
}
return 0;
