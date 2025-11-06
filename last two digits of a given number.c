#include<stdio.h>
int main()
{
  int year;
  int last;
  scanf("%d",&year);
  last=year%100;
  printf("02d",last);
  return 0;
}
