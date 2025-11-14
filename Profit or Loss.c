#include<stdio.h>
int main()
{
  int cp,sp;
  scanf("%d%d",&cp,&sp);
  if(cp>sp)
{
   printf("Loss");
}
else if(sp>cp)
{
   printf("Profit");
}
else if(sp==cp)
{
   printf("No profit and No loss");
}
else
{
   printf("Invalid Input");
}
return 0;
}
