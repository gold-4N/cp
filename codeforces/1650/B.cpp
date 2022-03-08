#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       long long a,b,c;
       long sum=0;
       cin>>a>>b>>c;
     
        if(b%c==0&&a!=b&&c!=1)b--;
        long long d=(b/c)+(b%c);
        long long d1=0;
         long long d0=((b/c)*c)-1;
         if(d0>=a){
             d1=b/c+c-2;
         }
         if(d0==0){
             if(c>a)d1=(b/c)+c-2;
         }
         sum=max(d,d1);
         cout<<sum<<endl;
       
   }
    return 0;
}