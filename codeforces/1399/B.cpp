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
     int a[n],b[n];
     int mi1=INT_MAX,mi2=INT_MAX;
     for (int i = 0; i <n; i++)
     {
       cin>>a[i];
       mi1=min(mi1,a[i]);
     }
     for (int i = 0; i < n; i++)
     {
       cin>>b[i];
       mi2=min(mi2,b[i]);
     }
     long long sum=0;
    for (int i = 0; i < n; i++)
    {
      int d=a[i]-mi1;
      int d1=b[i]-mi2;
      if(d==0||d1==0)sum+=d+d1;
      else sum+=max(d,d1);
     // cout<<sum<<endl;
    }
    cout<<sum<<endl;
   }
    
  return 0;
}
