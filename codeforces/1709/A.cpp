#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int x,a,b,c;
    cin>>x>>a>>b>>c;
    if(x==1)
    {
      if(a==0||(a==2&&b==0)||(a==3&&c==0))cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }
    else if(x==2)
    {
      if(b==0||(b==1&&a==0)||(b==3&&c==0))cout<<"NO"<<endl;
      else  cout<<"YES"<<endl;
    }
    else {
      if(c==0||(c==2&&b==0)||(c==1&&a==0))cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
    }
  }
  
   return 0;
}