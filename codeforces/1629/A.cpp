#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    bool c[n]={false};
    for (int i = 0; i < n; i++)
      cin>>a[i];
    for (int i = 0; i < n; i++)
      cin>>b[i];
      int n1=n,n2=n;
    while (1)
    {
      
    for (int i = 0; i < n; i++)
    {
      if(k>=a[i]&&!c[i]){
        k+=b[i];
        c[i]=true;
        n1--;
      }
    }
   // cout<<k<<" ";
    
    if(n2==n1)break;
      else {
        n2=n1;
      }}
    cout<<k<<endl;
    
  }
  
  return 0;
  }  