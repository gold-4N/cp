#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;  
 while(t--)
  {
    long long n,k;
    cin>>n>>k;
    long long a[n];
    long long b[n+1]={0};
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
      b[i+1]=b[i]+a[i];
    }
    if(n==1)cout<<(a[0]+k-1)<<endl;
    else if(k<=n)
    {
      long long ans=0;
      for(int i=k;i<= n;i++)
      {
        sum=b[i]-b[i-k];
        ans=max(ans,sum);
      }
      sum=ans;
      sum=sum+(k*k-k)/2;
      cout<<sum<<endl;
    }
    else 
    {
      for (int i = 0; i < n; i++)sum=sum+a[i];
      sum=sum+k*n;
      sum=sum-(n*n+n)/2;
       cout<<sum<<endl;
    }
   
  }
   return 0;
}