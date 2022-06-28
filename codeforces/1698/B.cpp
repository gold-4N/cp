#include<bits/stdc++.h>
#define n1 100
#define n2 1000
using namespace std;
long long dp[1000005];
const int MOD = (int) 1e9 + 7;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n,k;
    cin>>n>>k;
    long long a[n];
    long long sum=0;
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    if(k==1){
      cout<<(n+1)/2-1<<endl;
    }
    else{
      int sum=0;
    for (int i = 1; i <n-1; i++)
    {
      if(a[i-1]+a[i+1]<a[i])sum++;
    }
    cout<<sum<<endl;
    }
  }
     
   return 0;
}