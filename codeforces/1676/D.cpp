#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
       int n,m;
       cin>>n>>m;
       int a[n][m];
       for(int i=0;i<n;i++)
       for(int j=0;j<m;j++)cin>>a[i][j];
         long long sum=0;
         for(int j1=0;j1<n;j1++)
         {
         for (int i = 0; i < m; i++)
         {
           long long sum1=a[j1][i];
           int i1=j1,j=i;
           while (1)
           {
             i1++;j++;
             if(i1>=n||j>=m)break;
             sum1+=a[i1][j];
             
           }
           i1=j1;j=i;
           while (1)
           {
             i1--;j++;
             if(i1<0||j>=m)break;
             sum1+=a[i1][j];
            
           }
           i1=j1;j=i;
           while (1)
           {
             i1++;j--;
             if(i1>=n||j<0)break;
             sum1+=a[i1][j];
             
           }
           i1=j1;j=i;
           while (1)
           {
             i1--;j--;
             if(i1<0||j<0)break;
             sum1+=a[i1][j];
             
           }
           sum=max(sum1,sum);
          // cout<<sum<<" ";
         }
         }
         cout<<sum<<endl;
       
}
    
  return 0;
}
