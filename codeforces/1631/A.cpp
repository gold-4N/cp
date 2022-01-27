#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t,j=1;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for (int i = 0; i < n; i++)cin>>b[i];
    for (int i = 0; i < n; i++)
    {
      if(a[i]<b[i])swap(a[i],b[i]);
    }
    cout<<(*max_element(a,a+n))*(*max_element(b,b+n))<<endl;
  }
  return 0;
  }  