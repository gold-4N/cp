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
    int a[n];
    int b[n]={0};
    int ok[2]={0,0};
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
      ok[a[i]%2]++;
    }
    if(ok[1]>0)cout<<(n-ok[1])<<endl;
    else 
    {
      for (int i = 0; i < n; i++)
      {
        while (a[i])
        {
          if(a[i]%2==1)break;
          b[i]++;
          a[i]/=2;
        }

      }
      sort(b,b+n);
      cout<<n-1+b[0]<<endl;    
    }
    
    
  }
   return 0;
}