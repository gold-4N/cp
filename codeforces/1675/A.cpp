#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int a,b,c,x,y;
    cin>>a>>b>>c>>x>>y;
    if(a>=x){
      if(b+c>=y)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    else if(b>=y){
      
      if(a+c>=x)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    else {
      x=x-a;
      y=y-b;
      if(x+y<=c)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    
  }

    
  return 0;
}
