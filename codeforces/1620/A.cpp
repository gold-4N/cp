#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       string s;
       cin>>s;
      /* int a[s.size()+1];
       a[0]=1;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='E')a[i+1]=a[i];
           else if(s[i]=='N'){
               if(a[i]==1)a[i+1]=0;
               else a[i+1]=1;
           }
           cout<<a[i]<<" ";
       }
       cout<<a[s.size()-1];*/
       int sum=0;
       for (int i = 0; i < s.size(); i++)
       {
           if(s[i]=='N')sum++;

       }
       
       if(sum==1)cout<<"NO"<<endl;
       else cout<<"YES"<<endl;
    }
    return 0;
}