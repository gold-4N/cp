#include<stdio.h>
#include<string.h>
int main()
{
    float n,i=0;
    scanf("%f",&n);
    n=n*1.08;
int n1=n;
    if(n1<206)
    printf("Yay!\n");
    else if(n1==206)
    printf("so-so\n");
    else printf(":(\n");
				return 0;
}