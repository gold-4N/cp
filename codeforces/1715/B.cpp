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
      long long n,k,b,s,sum;
      vector<long long>v;
      cin>>n>>k>>b>>s;
      if(k*b>s)cout<<-1<<endl;
      else{
         sum=k*(n-1)-(n-1);
         //cout<<sum<<endl;
         if(s-(k*(b+1))>=sum)cout<<-1<<endl;
         else{
            for(int i=0;i<n;i++)
            {
               if(s==0)v.push_back(s);
               else{
                  if(i==0&&k*(b+1)>s){v.push_back(s);s=0;}
                  else{
                     if(i==0){
                        v.push_back(k*(b+1)-1);
                        s=s-(k*(b+1)-1);
                     }
                     else if(s<k){
                        v.push_back(s);
                        s=0;
                     }
                     else {
                        v.push_back(k-1);
                        s=s-(k-1);
                     }
                  }
               }
            }
            for(int i=n-1;i>=0;i--)cout<<v[i]<<' ';
            cout<<endl;
         }
        
      }
       
      
   }
   
   return 0;
}