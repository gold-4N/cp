#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
       int n;
       cin>>n;
       int num[n+1],ok;
       vector<int>ar,a[n+1];
       vector<vector<int>>v;
       for (int i = 1; i <= n; i++)
       {
          cin>>num[i];
          if(num[i]==i)ok=i;
          a[i].push_back(num[i]);
          a[num[i]].push_back(i);
       }
       bool is[n+1];
       memset(is,0,n+1);
       stack<int>s;
       s.push(ok);
       while (!s.empty())
       {
         int d=s.top();
         s.pop();
         int co=s.size();
       // cout<<d<<endl;
         ar.push_back(d);
         is[d]=true;
         for (int i = 0; i < a[d].size(); i++)
         {
           if(!is[a[d][i]])
           {
             s.push(a[d][i]);
           }
         }
         if(co==s.size())
         {
           v.push_back(ar);
           ar.clear();
         }
       } 
       //cout<<a[6].size()<<endl;
       if(n==1){
         cout<<1<<endl<<1<<endl<<1<<endl;
       }
       else{
       cout<<v.size()<<endl;      
       for (int i = 0; i < v.size(); i++)
       {
         cout<<v[i].size()<<endl;
         for (int j = 0; j < v[i].size(); j++)
         cout<<v[i][j]<<" ";
         cout<<endl;
       }}
       cout<<endl;
   }
   
   return 0;
}
