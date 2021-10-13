#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t,i;
    cin>>t;
    while(t--)
    {
     int a,b,c;
     cin>>a>>b>>c;
     int s[3];
     s[0]=a;
     s[1]=b;
     s[2]=c;
     sort(s,s+3);
     int a1=s[2]-a;
     int b1=s[2]-b;
     int c1=s[2]-c;
     a1++;
     b1++;
     c1++;
     if(s[2]>s[1]&&s[1]>s[0])
     {
       if(s[2]==a)a1--;
       if(s[2]==b)b1--;
       if(s[2]==c)c1--;
     }
     else if((s[0]==s[1]&&s[1]!=s[2])||(s[1]==s[0]&&s[1]!=s[2])||(s[0]==s[2]&&s[1]!=s[2])){
       if(s[2]==a)a1--;
       if(s[2]==b)b1--;
       if(s[2]==c)c1--;
     }
     cout<<a1<<" "<<b1<<" "<<c1<<endl;
    }
    
    return 0;
 }