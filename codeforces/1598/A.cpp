  #include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while (t--)
    {
      int n,c=0;
      cin>>n;
      string s,s1;
      cin>>s>>s1;
      for(int i=0;i<s.size();i++)
      {
        int so=(s[i]-'0')&(s1[i]-'0');
        if(so!=0){c=1;break;}
      }
      if(c==0)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    

    return 0;
 }