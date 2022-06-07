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
    c[0]=b[0]-a[0];
    int mex=b[0];
    for (int i = 1; i < n; i++)
    {
      if(mex<=a[i]){c[i]=b[i]-a[i];mex=b[i];}
      else 
      {
        if(mex>b[i])c[i]=0;
        else 
        {
          c[i]=b[i]-mex;
          mex=b[i];
        }
      }
    }
    for (int i = 0; i < n; i++)
    {
      cout<<c[i]<<" ";
    }cout<<endl;
  }
  return 0;
}
