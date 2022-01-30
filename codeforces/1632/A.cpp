#include <bits/stdc++.h>

using namespace std;
bool isPalindrome(string str, int h)
{
    int l = 0;
 
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
           
            return false;
        }
    }
    return true;
}

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1||(n==2&&(s[0]=='1'&&s[1]=='0'||s[0]=='0'&&s[1]=='1')))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}