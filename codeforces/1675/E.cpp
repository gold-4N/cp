#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
       int n,k;
       cin>>n>>k;
       string s,s1;
       cin>>s;
       s1=s;
       sort(s1.begin(),s1.end());
       int d=s1[n-1]-'a';
       if(d<=k)
       {
           //k=k-d;
           //k=k%25;
          //if(k==0)
           {
             for(int i=0;i<n;i++)cout<<'a';cout<<endl;
           }
         /*  else {
             for (int i = 0; i < n; i++)
             {
               char a='z'-k+1;
               cout<<a;
             }
             cout<<endl;
           }
*/
       }
       else 
       {
         int d=s[0];
         if(d-'a'>=k)
         {
           for (int i = 0; i < n; i++)
           {
             if(s[i]<=d && s[i]>d-k)s[i]=d-k;
            // cout<<s[i]<<" ";
           }
           cout<<s<<endl;
         } 
         else 
         {
           int d1;
           char s2='a';
           for (int i = 0; i < n; i++)
           {
             if(s[i]>'a'+k){d1=i-1;break;}
             s2=max(s2,s[i]);
           }
           // cout<<s2<<endl;
           for (int i = 0; i < n; i++)
           {
             if(s[i]<=s2)s[i]='a';
           }
           k=k-(s2-'a');
           s2=s[d1+1];
           for (int i = d1+1; i < n; i++)
           {
             if(s[i]<=s2&&s[i]>s2-k)s[i]=s2-k;
           }
           cout<<s<<endl;
         }        
       }
   }
   
   return 0;
}
