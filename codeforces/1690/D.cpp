#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int mi=INT_MIN;
    int a[n+1]={0};
    for (int i = 0; i < n; i++)
    {
      if(s[i]=='B')a[i+1]=a[i]+1;
      else a[i+1]=a[i];
    }
    for (int i = k; i <=n; i++)
    {
      mi=max(mi,a[i]-a[i-k]);
    }
    
    cout<<k-mi<<endl;
  }
  return 0;
}
