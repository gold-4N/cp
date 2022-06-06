#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int t,n1,n2;
  cin>>s>>t;
  int a[s.size()]={0};
  for (int i = 1; i < s.size(); i++)
  {
    if(s[i]==s[i-1])
    {
      a[i]=a[i-1]+1;
    } 
    else a[i]=a[i-1];
  }  
  while(t--)
  {
    cin>>n1>>n2;
    cout<<a[n2-1]-a[n1-1]<<endl;    
  }
   return 0;
}