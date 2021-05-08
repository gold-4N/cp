#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int a=n/100;
  if(n%100>0) a++;
  printf("%d\n",a);
  return 0;
}