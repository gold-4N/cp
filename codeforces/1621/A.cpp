#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int a,b;
    cin>>a>>b;
    double c=(double)a/2;
    c=round(c);
    if(c<b)cout<<"-1"<<endl;
    else {
      int co=0,c=0;
      for(int i=0;i<a;i++)
      {
        if(i%2==1||c>=b)for(int j=0;j<a;j++)cout<<".";
        else {
          for (int j = 0; j < a; j++)
          {
             if(j==co){cout<<"R";}
             else cout<<".";
          }
         // cout<<co;
          if(co>a)co=0;
          c++;
           co+=2;
        }cout<<endl;
      }
    }
  }
  
  return 0;
}