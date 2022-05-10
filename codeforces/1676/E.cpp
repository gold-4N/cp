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
       int a[n];
       for (int i = 0; i < n; i++)
       cin>>a[i];
       sort(a,a+n);
       int ar[n+2]={0};

       ar[1]=a[n-1];
       int j=2;
       for (int i = n-2; i>=0; i--)
       {
         ar[j]=ar[j-1]+a[i];j++; 
       }
       while (m--)
       {
         int cn;
         cin>>cn;
         int i=lower_bound(ar,ar+n+1,cn)-ar;
        //cout<<i<<endl;
         if(ar[i]<cn)cout<<-1<<endl;
         else cout<<i<<endl;
       }
       
       
   }
   
   return 0;
}
