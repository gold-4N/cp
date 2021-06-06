#include<stdio.h>
#include<string.h>
int main()
{
    int n,i=0;
    scanf("%d",&n);
    while(n--)
    {
    int a;
    scanf("%d",&a);
    if(a-10>0)
    {
    i=i+(a-10);
    }
    
    }printf("%d\n",i);
				return 0;
}