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
    for (int i = 0; i < s.size(); i++)
    {
      if(s[i]>='a'&&s[i]<='z'){
        s[i]-=32;
      }
    }
    if(s=="YES")cout<<s<<endl;
    else cout<<"NO"<<endl;
  }

  return 0;
}