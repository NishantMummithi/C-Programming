#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  if(n%2!=0)
{
   printf("Weird");
}
else if(n%2==0 && 2<=n<=5)
{
   printf("Not weird");
}
else if(n%2==0 && 6<=n<=20) 
{
   printf("Weird");
}
else
{
   printf("Not weird");
}
return 0;
}
