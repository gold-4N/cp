#include <stdio.h>

int main()
{
    double a,b;
  scanf("%lf %lf",&a,&b);
  double c=((a-b)/3)+b;
  int C=c;
  if(c>C)
  printf("%lf\n",c);
  else printf("%d",C);
    return 0;
}
