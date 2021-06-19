#include<stdio.h>
#include<string.h>
int main()
{
    long long n,i,sum=1;
    scanf("%lld",&n);
    if(n==sum)printf("1\n");
    else{
    for(i=2;;i++)
    {
        sum=sum+i;
        if(sum>=n)break;
        
    }
    printf("%lld\n",i);
    }
				return 0;
}