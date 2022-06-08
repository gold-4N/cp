#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int s=1378;
  int s1=8;
  /*for (int i = 1; i < t; i++)
  {
    s1*=s;
    s1%=10;
  }*/
  if(t==0)cout<<1<<endl;
  else if(t%4==1)cout<<8<<endl;
  else if(t%4==2)cout<<4<<endl;
  else if(t%4==3)cout<<2<<endl;
  else cout<<6<<endl;
  return 0;
}
