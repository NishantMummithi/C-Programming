#include<stdio.h>
int main()
{
  int c,s;
  float profit;
  scanf("%d%d",&c,&s);
  profit=(s-c)*100.0/c;
  printf(".%2f",profit);
  return 0;
}
