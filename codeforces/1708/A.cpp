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
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    bool ok=false;
    for (int i = 1; i < n; i++)
    {
      if(a[i]%a[0]!=0){
        ok=true;
        break;
      }
    }
    if(ok)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
  }

  return 0;
}