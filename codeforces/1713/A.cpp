#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v[101];
map<int,int>mp[101];
int is[101];
long long sum;
int co,t,t1;
void dfs1(int d)
{
   is[d]=1;
   for (auto i:v[d])
   {
      if(is[i.first]==0)
      {
         if(mp[i.first][d]==1){
            sum+=i.second;
            //cout<<d<<" "<<i.first<<endl;
         }
         co++;
         dfs1(i.first);
         co--;
      }
      else if(co==t-1&&i.first==1)
      {
         if(mp[i.first][d]==1)sum+=i.second;
          //cout<<d<<" "<<i.first<<endl;
      }
   }
   
}
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
      int n;
      cin>>n;
      int a,b;
      int x=0,y=0,x1=0,y1=0;
      while (n--)
      {
         cin>>a>>b;
         if(a==0)
         {
            y=max(y,b);
            if(b<0)y1=min(y1,b);
         }
         else
         {
            x=max(x,a);
            if(a<0)x1=min(x1,a);
         }
      }
      cout<<2*(x-x1+y-y1)<<endl;
   }
   
   return 0;
}