#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n,k;
    cin>>n;
    int a[n];
    int s;
    vector<int>v[n+1];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
      v[a[i]].push_back(i);
    }
    
    for(int i=1;i<=n;i++){
      if(v[i].size()==0)cout<<0<<' ';
      else{
        s=1;
        for(int j=1;j<v[i].size();j++)
          if((v[i][j]-v[i][j-1]-1)%2==0)s++;
          cout<<s<<' ';
      }
    }cout<<'\n';
  }

  return 0;
}