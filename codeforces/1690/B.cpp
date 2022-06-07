#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    for (int i = 0; i < n; i++)
    cin>>a[i];
    for (int i = 0; i < n; i++)cin>>b[i];
    int mx=INT_MIN;
    for (int i = 0; i < n; i++)
    {

      c[i]=a[i]-b[i];
      mx=max(mx,c[i]);
    }
    bool ok=false;
    for (int i = 0; i < n; i++)
    {
      if((mx!=c[i]&&b[i]!=0)||mx<0){ok=true;break;}
    }
    
    if(ok)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
  }
  return 0;
}
