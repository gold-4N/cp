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
    long long co=0,d;
    string a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for (int i = 0; i < n/2; i++)
    {
      for(int j=i;j<n-i-1;j++)
      {
       int z=0,o=0;
        if(a[i][j]=='1')o++;
        else z++;
        if(a[n-j-1][i]=='1')o++;
        else z++;
        if(a[j][n-1-i]=='1')o++;
        else z++;
        if(a[n-i-1][n-j-1]=='1')o++;
        else z++;
       // cout<<z<<' '<<o<<endl;
        co+=min(o,z);
      }
      
    }
    cout<<co<<endl;
  }

  return 0;
}