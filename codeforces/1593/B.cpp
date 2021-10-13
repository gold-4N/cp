#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t,i;
    cin>>t;
    while(t--)
    {
     string a;
     cin>>a;
     int l=a.size();
     int s=(a[l-2]-'0')*10+(a[l-1]-'0');
     if(s%25==0||s==0)cout<<"0"<<endl;
     else {
       int c=0,co=0,co1=0;
        for(int i=l-1;i>=0;i--)
        {
          if(a[i]=='5'&&c==0)
          {
            c=1;
          }
          else if(c==1&&(a[i]=='7'||a[i]=='2'))
          {
            break;
          }
          else co++;
        }
        c=0;
         for(int i=l-1;i>=0;i--)
        {
          if(a[i]=='0'&&c==0)
          {
            c=1;
          }
          else if(c==1&&(a[i]=='0'||a[i]=='5'))
          {
            break;
          }
          else co1++;
        }
       // cout<<co<<" "<<co1<<endl;
        if(co1>co){
          cout<<co<<endl;
        }
        else cout<<co1<<endl;
     }
    }
    
    return 0;
 }