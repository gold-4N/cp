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
      int n;
      cin>>n;
      int a[n];
      for (int i = 0; i < n; i++)
      cin>>a[i];
      sort(a,a+n);
      cout<<a[n-1]+a[n-2]-a[0]-a[1]<<endl;
      
   }
   
   return 0;
}