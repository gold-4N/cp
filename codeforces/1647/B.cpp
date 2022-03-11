#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       int a,b;
       bool c=false;
       cin>>a>>b;
       string s[a];
       for (int i = 0; i < a; i++)
       {
           cin>>s[i];
       }
       if(a==1||b==1)cout<<"YES"<<endl;
       else{
           for (int i = 0; i < a-1; i++)
           {
               for (int j = 0; j < b-1; j++)
               {
                   if((s[i][j]=='1'&&s[i][j+1]=='1'&&((s[i+1][j]=='1'&&s[i+1][j+1]=='0')||(s[i+1][j]=='0'&&s[i+1][j+1]=='1')))||(((s[i][j]=='1'&&s[i][j+1]=='0')||(s[i][j]=='0'&&s[i][j+1]=='1'))&&s[i+1][j]=='1'&&s[i+1][j+1]=='1')){
                       c=true;break;
                   }
               }
               
           }
           if(c)cout<<"NO"<<endl;
           else cout<<"YES"<<endl;
       }
  }
    return 0;
}
