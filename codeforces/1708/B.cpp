#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n,l,r,d;
    cin>>n>>l>>r;
    vector<int>v;
    v.push_back(l);
    for (int i = 2; i <=n; i++)
    {
      if(l%i==0)v.push_back(l);
      else {
        d=i-l%i;
        if(l+d<=r)v.push_back(l+d);
        else break;
      }
    }
    if(v.size()==n){
      cout<<"YES"<<endl;
      for(auto i:v)cout<<i<<' ';
      cout<<endl;
    }
    else cout<<"NO"<<endl;
    
  }

  return 0;
}