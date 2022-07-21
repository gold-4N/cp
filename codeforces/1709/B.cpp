#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  int t;
  cin>>n>>t;
  int a[n];
  int n1,n2;
  long long sum[n+1]={0},sum1[n+1]={0};

  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  for (int i = 1; i < n; i++)
  {
    if(a[i-1]-a[i]>0)
    {
      sum[i]=sum[i-1]+a[i-1]-a[i];
    }
    else sum[i]=sum[i-1];
    if(a[i]-a[i-1]>0)sum1[i]=sum1[i-1]+a[i]-a[i-1];
    else sum1[i]=sum1[i-1];
  }
  
  while (t--)
  {
    cin>>n1>>n2;
    if(n2>n1)cout<<sum[n2-1]-sum[n1-1]<<endl;
    else cout<<sum1[n1-1]-sum1[n2-1]<<endl;
  }
  
   return 0;
}