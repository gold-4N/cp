#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n],b[n],c[n+1]={0},d[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
      b[i]=a[i];
      c[a[i]]++;
    }
    sort(b,b+n);
    sort(c,c+n+1);
    if(c[n]>n/2)cout<<-1<<endl;
    else
    {
      int i=0,j=0;
      for (int i = 0; i < n; i++)
      {
        if(a[i]==b[i])
        {
          j=i+1;
          if(j==n)
          {
            swap(b[i],b[i-1]);
          }
          else {
          while (1)
          {
            if(a[i]!=b[i]||j==n)break;
            swap(b[i],b[j]);
            j++;
          }
          }
        }
      }
      for (int i = 0; i < n; i++)
      {
        cout<<b[i]<<" ";
      }
      
      cout<<endl;
    }
  }
  return 0;
}
