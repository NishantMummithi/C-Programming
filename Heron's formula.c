#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c;
  double s,triangle_area;
  scanf("%d%d%d",&a,&b,&c);
  s=(a+b+c)/2.0;
  triangle_area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("%.4f",triangle_area);
  return 0;
}
