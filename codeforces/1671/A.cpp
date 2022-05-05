#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    string s;
    cin>>s;
    bool ok=false;
    for (int i = 1; i <s.size()-1; i++)
    {
      if((s[i-1]!=s[i]&&s[i+1]!=s[i])||s[s.size()-1]!=s[s.size()-2]){
        ok=true;
        break;
      }
    }
    if(ok||s.size()==1||s[0]!=s[1])cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
    
  return 0;
}
