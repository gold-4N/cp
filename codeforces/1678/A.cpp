#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  string s,sc;
  while (t--)
  {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    bool ok=false,zero=false;
    int ind=-1;
    for(int i=0;i<n-1;i++)
    {
      if(a[i]==0)
      {
        ind=i;
        zero=true;
        continue;
      }
      else if(!zero&&a[i]==a[i+1])
      {
        ok=true;

      }
      if(zero)break;
      
    }
    if(a[n-1]==0)ind++;
    if(zero)cout<<n-ind-1<<endl;
    else if(ok)cout<<n<<endl;
    else cout<<n+1<<endl;
  }
    

    
  return 0;
}
