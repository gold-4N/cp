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
       int mi=INT_MAX;
       for (int i = 0; i < n; i++)
       {
         cin>>a[i];
         mi=min(a[i],mi);
       }
       long long sum=0;
       for (int i = 0; i < n; i++)
       sum+=(a[i]-mi);
       cout<<sum<<endl;
       
   }
   
   return 0;
}
