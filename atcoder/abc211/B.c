#include <stdio.h>
#include <string.h>
int main()
{
   char a[3],b[3],c[3],d[3];
   int s[4]={0,0,0,0};
   scanf("%s %s %s %s", a,b,c,d);
   if(strcmp(a,"H")==0||strcmp(b,"H")==0||strcmp(c,"H")==0||strcmp(d,"H")==0)
   {
       s[0]=1;
   }
   if(strcmp(a,"2B")==0||strcmp(b,"2B")==0||strcmp(c,"2B")==0||strcmp(d,"2B")==0)
   {
       s[1]=1;
   }
   if(strcmp(a,"3B")==0||strcmp(b,"3B")==0||strcmp(c,"3B")==0||strcmp(d,"3B")==0)
   {
       s[2]=1;
   }
   if(strcmp(a,"HR")==0||strcmp(b,"HR")==0||strcmp(c,"HR")==0||strcmp(d,"HR")==0)
   {
       s[3]=1;
   }
 //  printf("%d %d %d %d", s[0],s[1],s[2],s[3]);
   if(s[0]==1&&s[1]==1&&s[2]==1&&s[3]==1)printf("Yes\n");
   else printf("No\n");
    return 0;
}
