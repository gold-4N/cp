#include <bits/stdc++.h>

using namespace std;
int main()
{
  int t;
  cin>>t;
  int sum=0;
  vector<int>a;
  a.push_back(0);
  while (t--)
  {
    int n; 
    cin>>n;
    sum+=n;
    a.push_back(sum%360);
  }
  a.push_back(360);
  sum=0;
  sort(a.begin(),a.end());
  for (int i = 1; i<a.size(); i++)
  {
      int d=(a[i]-a[i-1]);
      sum=max(sum,d);
  }
  cout<<sum<<endl;
  return 0;
}