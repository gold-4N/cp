#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   string a[46];
   for(int i=1;i<=45;i++)
   {
     if(i<10)a[i]='0'+i;
     else{
      int d=i;
        for(int j=9;j>=1;j--)
        {
          if(d==0)break;
          if(d-j>=0){a[i]+=(j+'0');
          d-=j;}
        }
     }
     sort(a[i].begin(),a[i].end());
    // cout<<a[i]<<endl;
   }
   while (t--)
   {
    int n;
    cin>>n;
    cout<<a[n]<<endl;
   }
   
   return 0;
}