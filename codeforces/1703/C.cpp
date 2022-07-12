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
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for (int i = 0; i < n; i++)
    {
      int n1;
      string s;
      cin>>n1>>s;
      for (int j = 0; j < n1; j++)
      {
        if(s[j]=='D')
        {
          a[i]++;
          a[i]=a[i]%10;
        }
        else {

          a[i]--;
          if(a[i]<0)a[i]=9;
        }
      }
      cout<<a[i]<<' ';
    }
    cout<<endl;
  }

  return 0;
}