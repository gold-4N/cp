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
    string a[n];
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {cin>>a[i];mp[a[i]]=1;}
    string s,s1;
    bool ok=false;
    for (int i = 0; i < n; i++)
    { ok=false;
      for (int j = 0; j < a[i].size()-1; j++)
      {
        s+=a[i][j];
        for (int j1 = j+1; j1 < a[i].size(); j1++)
        {
          s1+=a[i][j1];
        }
        if(mp[s]==1&&mp[s1]==1){
          ok=true;break;
        }
         s1.clear();
      }
      s.clear(); 
      s1.clear();
      if(ok)cout<<1;
      else cout<<0;
    }
    cout<<endl;
  }

  return 0;
}