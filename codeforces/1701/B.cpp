#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin>>n;
    int i=1;
    int a[n+1]={0};
    a[1]=1;
    vector<int>v;
    v.push_back(1);
    cout<<2<<endl;
    while (1)
    {
      if(i==n)break;
      if(v[v.size()-1]*2<=n&&a[v[v.size()-1]*2]==0){
        v.push_back(v[v.size()-1]*2);
        a[v[v.size()-1]]=1;
      }
      else {
        ++i;
        if(a[i]==0)v.push_back(i);
      }      
     // cout<<v[v.size()-1]<<endl;
    }
    for (auto i : v)
    cout<<i<<' ';cout<<endl;
  }

  return 0;
}