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
   cin>>t1;
   t=t1;
   int a,b,c;
   long long sum1=0;
   while (t1--)
   {
      cin>>a>>b>>c;
      sum1+=c;
      v[a].push_back({b,c});     
      v[b].push_back({a,c});
      mp[a][b]=1;
   }
   
   dfs1(1);//cout<<sum<<endl;
   cout<<min(sum1-sum,sum)<<endl;
   return 0;
}