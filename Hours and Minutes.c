#include<stdio.h>
int main()
{
  int min:
  int h;
  scanf("%d",&min);
  h=min/60;
  int rem;
  rem=min%60;
  printf("%d Hour(s) %d Minute(s)",h,rem);
  return 0;
}
