#include<stdio.h>
#include<math.h>
int main()
{
  int N;
  int sum;
  scanf("%d%d",&N);
  int i;
  for(i=1;i<=N;i++)
{
   sum+=i;
}
printf("%d",sum);
return 0;
}
