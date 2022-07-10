#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin>>s;
    int co=0;
    int a1=0,a2=0,a3=0;
    for (int i = 0; i < s.size(); i++)
    {
       if(a1==0)a1=s[i];
       else if(s[i]==a1)continue;
       else if(a2==0)a2=s[i];
       else if(s[i]==a2)continue;
       else if(a3==0)a3=s[i];
       else if(s[i]==a3)continue;
       else {
        co++;
        //cout<<(char)a1<<' '<<(char)a2<<' '<<(char)a3<<' ';
        a1=s[i];
        a2=a3=0;
       }
    }
    if(a1>0||a2>0||a3>0)cout<<co+1<<endl;
    else cout<<co<<endl;
  }

  return 0;
}