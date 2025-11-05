#include<stdio.h>
int main()
{
  int kph;
  float mps;
  scanf("%d",&kph);
  mps=kph*(1000.0/3600.0);
  printf("%.2f",mps);
  return 0;
}
