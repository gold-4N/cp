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
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
      sum=sum^a[i];
    }
    for (int i = 0; i <n; i++)
    {
      if(sum^a[i]==a[i]){cout<<a[i]<<endl;break;}
    }
    
  }
     
   return 0;
}