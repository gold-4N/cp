#include<bits/stdc++.h>
using namespace std;
const int mod=(int) 1e9+7;
int main()
{
   int t;
   int n;
   cin>>t;
   while(t--)
   {
      cin>>n;
      if(n==3)cout<<-1<<endl;
      else {
        cout<<n<<' '<<n-1<<' ';
        n-=2;
        for (int i = 1; i <=n; i++)
        cout<<i<<' ';
        
        cout<<endl;
        
      }
   }
   return 0;
}