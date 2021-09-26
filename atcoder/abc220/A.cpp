#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int a,b,c,d=0,e;
  cin>>a>>b>>c;
  for(int i=1;e<=b;i++){
   e=c*i;
  if(e>=a&&e<=b){
    d=1;
    break;
  }
  }
  if(d==1)cout<<e<<endl;
  else cout<<"-1"<<endl;
 return 0;
}