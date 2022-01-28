#include <bits/stdc++.h>

using namespace std;
int main()
{
  string a,b;
  cin>>a>>b;
  int i,s=b[0]-a[0];
  if(s<0){
    s=26+s;
  }

  for (i = 1; i < a.size(); i++)
  {
    int d=a[i]+s;
    if(d>122){
      d=96+(d-122);
    }
   // cout<<d<<" ";
    if((d!=b[i]))break;
  }
  if(i==a.size())cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
  }  