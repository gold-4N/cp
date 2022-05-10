#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
       int n,n1;
       cin>>n>>n1;
       int sum=0;
       vector<int>v;
       string s[n];
       int mi=INT_MAX;
       for (int i = 0; i < n; i++)
       cin>>s[i];
       for(int k=0;k<n-1;k++){
       int m=INT_MAX;
       for (int i = k+1; i < n; i++)
       {
         sum=0;
         for (int j = 0; j < n1; j++)
         {
           sum+=abs((int)s[k][j]-(int)s[i][j]);
         }
         m=min(m,sum);
       }
         mi=min(m,mi);
       }
       
       
       
       cout<<mi<<endl;
   }
   
   return 0;
}
