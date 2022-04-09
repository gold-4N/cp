#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
     long long n,sum=0;
     cin>>n;
     int a[n];
     int b[n];
     for (int i = 0; i < n; i++)
     {
       cin>>a[i];
     }
     for (int i = 0; i < n; i++)
     {
       cin>>b[i];
     }
     for (int i = 0; i < n; i++)
     {
       if(b[i]>a[i])swap(a[i],b[i]);
     }
     for (int i = 1; i < n; i++)
     {
       sum+=abs(a[i]-a[i-1]);
       sum+=abs(b[i]-b[i-1]);
     }
     
     cout<<sum<<endl;
   }
     
  return 0;
}
