#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    bool ok=true;
    for (int i = 0; i < n-1; i++)
    {
      if(a[i]>=a[i+1]){ok=false;break;}
    }
    
   if(ok)cout<<0<<endl;
    else{
      int co=0;
      for (int i = n-2;; i--)
      {
        //cout<<i<<" ";
        if(i==-1)break;
        while (1)
        {
          if(a[i]==0){
            //ok=true;
            break;}
          if(a[i]<a[i+1])break;
          a[i]/=2;
          co++;
        }
        //if(ok)break;
      }
      if(a[0]==a[1])cout<<-1<<endl;
      else cout<<co<<endl;
      
    }
    
  }

    
  return 0;
}
