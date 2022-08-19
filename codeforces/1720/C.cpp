#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v[3501];
vector<int>v1;
int is[3501];
long long sum[3501];
int f,ye;

void dfs(int d)
{
   is[d]=1;
   if(f==0)for (auto i :v[d])
   {
      if(is[i.first]==0){
            sum[i.first]=sum[d]+i.second;
            dfs(i.first);
      }
      else if(f==0)
      {
         if(sum[d]-sum[i.first]+i.second<0)
         {
            f=1;
            ye=i.first;
            cout<<"YES"<<endl;
            v1.push_back(i.first);
            v1.push_back(d);
            return;
         }
      } 
   }
   if(d==ye){
      cout<<d<<' ';
     for(int j=v1.size()-1;j>=0;j--)cout<<v1[j]<<' ';
     exit(0);
   }
   else if(f==1) v1.push_back(d);
}
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
      int n,m;
      cin>>n>>m;
      string s[n];
      bool ok=false;
      long long co=0;
      for(int i=0;i<n;i++)cin>>s[i];
      for (int i = 0; i < n-1; i++)
      {
         int d=0;
         for (int j = 0; j < m-1; j++)
         {
            d=0;
            d+=(s[i][j]-'0');
            d+=(s[i][j+1]-'0');
            d+=(s[i+1][j]-'0');
            d+=(s[i+1][j+1]-'0');
            //cout<<d<<endl;
            if(!ok&&d<=2)
            {
               ok=true;
            }
            if(s[i][j]=='1')co++;
         }   
      }
      for(int i=0;i<n;i++)if(s[i][m-1]=='1')co++;
      for(int i=0;i<m;i++)if(s[n-1][i]=='1')co++;
      //cout<<co<<endl;
      //cout<<ok<<endl;
      if(s[n-1][m-1]=='1')co--;
      if(ok)cout<<co<<endl;
      else if(co==m*n)cout<<co-2<<endl;
      else cout<<co-1<<endl;
      
   }
   
   return 0;
}