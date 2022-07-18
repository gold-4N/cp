#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n,k,d,m,m1;
    cin>>n>>k;
    int a[n];
    char s[k+1];
    for (int i = 1; i <= k; i++)s[i]='B';
    
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
      d=k+1-a[i];
      m=min(a[i],d);
      m1=max(a[i],d);
      if(s[m]=='B')s[m]='A';
      else s[m1]='A';
      
    }
    for(int i=1;i<=k;i++)cout<<s[i];cout<<'\n';
  }

  return 0;
}