#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n,k;
    cin>>n>>k;
    map<int,int>s,s1;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
      if(s.find(a[i])==s.end()){s[a[i]]=i;s1[a[i]]=i;}
      else {s[a[i]]=min(s[a[i]],i);s1[a[i]]=max(s1[a[i]],i);}
    }
     
    int c,c1;
    for (int i = 0; i < k; i++)
    {
      cin>>c>>c1;
      if(s.find(c)==s.end()||s.find(c1)==s.end())cout<<"NO"<<endl;
      else if(s[c]<=s1[c1])cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
     
  }

  return 0;
}