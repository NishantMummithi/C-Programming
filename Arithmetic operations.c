#include<stdio.h>
#include<math.h>
int main()
{
  int num1,num2;
  scanf("%d%d",&num1,num2);
  int sum=num1+num2;
  int difference=num1-num2;
  int product=num1*num2;
  int Quotient=num1/num2;
  int remainder=num1%num2;
  printf("sum:%d\n",sum);
  printf("differencr:%d\n",difference);
  printf("product:%d\n",product);
  printf("Quotient:%d\n",Quotient);
  printf("remainder:%d\n",remainder);
  return 0;
}
