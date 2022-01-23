#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,s;
  cin>>n>>s;
  string a[n],b[s];
  for (int i = 0; i < n; i++)
    cin>>a[i];
  for (int i = 0,j=0; i < s; i++,j++)
  {
    cin>>b[i];
    if(a[j]==b[i])cout<<"Yes"<<endl;
    else {
        while (1)
        {
          if(a[j]==b[i]){cout<<"Yes"<<endl;break;}
          else {cout<<"No"<<endl;j++;}
        }
        
    }
  }
  
  
  return 0;
  }  