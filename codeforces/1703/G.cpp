#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n,k;
    cin>>n>>k;
    long long a[n],b[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      if(i==0)b[i]=a[i];
      else b[i]=b[i-1]+a[i];
    }
    int dp[n][34];
    for (int i = 0; i < n; i++)
    {
      int d=a[i];
      int j=0;
      while (j<34)
      {
        //if(d==0)break;
        dp[i][j]=(d/=2);
       // cout<<d<<' ';
        j++;
      }
      
    }
    long long sum=b[n-1]-(n*k),sum1=0;//cout<<sum<<endl;
    for (int i = 0; i < 34&&i<n; i++)
    {
      sum1+=dp[i][i];
    }
    sum=max(sum1,sum);
    for (int i = 0; i < n; i++)
    {
      sum1=b[i]-(i+1)*k;
      
      for (int j = i+1,k=0;k<34&&j<n; j++,k++)
      {
        sum1+=dp[j][k];
      }
      sum=max(sum1,sum);
    }
   cout<<sum<<endl;
  }

  return 0;
}