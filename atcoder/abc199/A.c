#include<stdio.h>

int main()
{
    long long a,b,c;
    scanf("%lld %lld %lld",&a,&b,&c);
    if((a*a+b*b)<(c*c))printf("Yes\n");
    else printf("No\n");
				return 0;
}