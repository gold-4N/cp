#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   map<string,int> mp;
   while(t--){
      
       string s;
       cin>>s;
     //  mp[s];
     if(mp.find(s)==mp.end())
      mp.insert({s,1});
      else{
         // cout<<mp[s]<<endl;
      mp[s]++;}
       // cout<<mp.size()<<" ";
       if(mp[s]>1)cout<<s<<mp[s]-1<<endl;
       else cout<<"OK"<<endl;
   }
    return 0;
}
