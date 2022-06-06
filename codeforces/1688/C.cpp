#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;  
 while(t--)
  {
    int n;
    cin>>n;
    string s[2*n+1];
    int a[26]={0};
    for (int i = 0; i <= 2*n; i++)
    {
      cin>>s[i];
      for (int j = 0; j < s[i].size(); j++)
      {
        a[s[i][j]-'a']++;
      }
      
    }
    for (int i = 0; i < 26; i++)
    {
      if(a[i]%2==1){cout<<(char)('a'+i)<<endl;break;}
    }
    
   
  }
   return 0;
}