#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
       b[i]=a[i];
    }
    sort(b,b+n);
    int c=0;
    for (int i = 0; i < n; i++)
    {
      if(b[i]!=a[i]){
        int j=i;
        while (1)
        {
          j++;
          if(b[i]==a[j]){
            break;
          }
        }
        c=j;
        for (j; j>=i; j--)
        cout<<a[j]<<" ";
        break;
      }
      cout<<a[i]<<" ";
    }
if(c!=0)for (int i = c+1; i < n; i++)cout<<a[i]<<" ";cout<<endl;
    
    
  }  
  return 0;
}