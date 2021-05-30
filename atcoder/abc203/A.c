#include <stdio.h>
#include <math.h>
int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if (a == b)

  {
    printf("%d", c);
  }
  else if (c == b)

  {
    printf("%d", a);
  }
  else if (a == c)
  {
    printf("%d", b);
  }
  else
  {
    printf("0");
  }

  return 0;
}