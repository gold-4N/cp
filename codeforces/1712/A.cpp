#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
      int n,k;
      cin>>n>>k;
      int a[n],b[n],c[n+1]={0};
      for(int i=0;i<n;i++){cin>>a[i];b[i]=a[i];}
      sort(b,b+n);
      long long sum=0;
      for(int i=0;i<k;i++)
      {
        sum+=a[i];
        sum-=b[i];
        c[b[i]]=1;
      }
      
      if(sum==0)cout<<0<<endl;
      else{
            int co=0;
            for(int i=0;i<k;i++)
            {
              if(c[a[i]]==0)co++;
            }
            cout<<co<<endl;
       }
     
    }  
   return 0;
}