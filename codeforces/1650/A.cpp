#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       string s;
       char c;
       cin>>s>>c;
       int d=-1;
       for (int i = 0; i < s.size(); i++)
       if(s[i]==c){if(i%2==1)continue;
       d=i;break;}
       
       if(d>-1&&d%2==0)cout<<"Yes"<<endl;
       else cout<<"No"<<endl;
   }
    return 0;
}