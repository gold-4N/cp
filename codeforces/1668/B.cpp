#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--)
  {
      int n,m;
      cin>>n>>m;
      long long a[n];
      unsigned long long int sum=0;
      for (int i = 0; i < n; i++)
      {
          cin>>a[i];
      }
      sort(a,a+n);
      int b[n]={0};
      sum+=a[0]+1;
      for (int i = 1; i < n; i++)
      {
         // cout<<sum<<" ";
          sum+=(a[i]-a[i-1])+1;
        //  if(i==n-1){
          //    if(a[0]==a[i])continue;

          //}
          sum+=a[i];
      }
      
      if(n>m || sum>m)cout<<"NO"<<endl;
      else cout<<"YES"<<endl;
  }
    
     return 0; 
}
