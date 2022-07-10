#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
     long long n;
     cin>>n;
     int d=log10(n);
     long long n1=pow(10,d);
     cout<<n-n1<<endl;
  }

  return 0;
}