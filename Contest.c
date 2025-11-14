#include<stdio.h>
int main()
{
  int X,A,B;
  scanf("%d%d%d",&X,&A,&B);
  int score;
  score=A+2*B;
  if(A+2*B>=X)
{
   printf("QUALIFY");
}
else
{
   printf("NOT QUALIFY");
}
return 0;
}
