#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
     int n;
     cin>>n;
     int a[n];
     vector<int>v[n+1];
     int u[n+1]={0};
     int c[n+1]={0};
     int ans=0;
     for(int i=0;i<n;i++)
     {
       cin>>a[i];
       if(c[a[i]]==1){v[a[i]].push_back(i); u[i+1]=u[i];}
       else {
       c[a[i]]=1;
       v[a[i]].push_back(i); u[i+1]=u[i]+1;
       }
     }
     int i;
     for(i=n-1;i>0;i--)
     {
      if(a[i]<a[i-1])break;
     }
     for(int j=n-1;j>=i;j--)
     {
       int d=lower_bound(v[a[j]].begin(),v[a[j]].end(),i)-v[a[j]].begin();
       //cout<<d<<' ';
       if((d==0&&v[a[j]][d]<i)||d>0)
       {
         ans=u[j+1];
         break;
        
       }
       else ans=u[j];
     }
     cout<<ans<<endl;
   }  
   return 0;
}