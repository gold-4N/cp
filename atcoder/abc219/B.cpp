#include <bits/stdc++.h>
using namespace std;
int main(){
  string a,b,c,d;
  cin>>a>>b>>c>>d;
  for(int i=0;i<d.size();i++)
  {
    if(d[i]=='1')cout<<a;
    else if(d[i]=='2')cout<<b;
    else cout<<c;
  }
  return 0;
}