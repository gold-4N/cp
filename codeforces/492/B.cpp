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
   int n,l;
   cin>>n>>l;
   int a[n];
   int d=0;
   for(int i=0;i<n;i++)cin>>a[i];
   sort(a,a+n);
   for(int i=1;i<n;i++)
   {
      d=max(d,a[i]-a[i-1]);
   }
 printf("%.10lf\n",max((double)d/2,(double)max(l-a[n-1],a[0])));  
 
   return 0;
}