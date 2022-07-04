#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  map<int,long long>b;
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
    if(b.find(a[i]-i)!=b.end())
    {
      b[a[i]-i]+=a[i];
    }
    else b.insert({a[i]-i,a[i]});
  }
  long long sum=0;
  for (auto i : b)
  {
    sum=max(i.second,sum);
  }
  cout<<sum<<endl;

   return 0;
}