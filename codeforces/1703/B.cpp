#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    string s;
    cin>>n>>s;
    long long a[26]={0};
    for (int i = 0; i < n; i++)
    {
      if(a[s[i]-'A']==0)a[s[i]-'A']=2;
      else a[s[i]-'A']++;
    }
    cout<<accumulate(a,a+26,0)<<endl;
  }

  return 0;
}