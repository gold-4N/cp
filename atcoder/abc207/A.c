#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int d=a+b;
    int e=b+c;
    int f=a+c;
    int g=(d+e+abs(d-e))/2;
    int h=(g+f+abs(g-f))/2;
    printf("%d\n", h);
    return 0;
}
			