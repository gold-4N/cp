#include<bits/stdc++.h>
using namespace std;
const int mod=(int) 1e9+7;
int main()
{
   int t;
   string s,s1;
   int n1,n2;
   cin>>t;
   while(t--)
   {
      cin>>s>>s1;
      n1=s.size()-1;
      n2=s1.size()-1;
      if(s[n1]==s1[n2])
      { 
        if(n1==n2)cout<<'='<<endl;
        else {
          if(s[n1]=='S'){
         
           if(n1<n2)cout<<'>'<<endl;
          else cout<<'<'<<endl;
         }
        else {
          if(n1<n2)cout<<'<'<<endl;
          else cout<<'>'<<endl;
        }
        }
      }
      else if(s[n1]=='L')
      {
        cout<<'>'<<endl;
      }
      else if(s1[n2]=='L')
      {
        cout<<'<'<<endl;
      }
      else if(s[n1]=='S')
      {
        cout<<'<'<<endl;
      }
      else if(s1[n2]=='S')
      {
        cout<<'>'<<endl;
      }
      
   }
   return 0;
}