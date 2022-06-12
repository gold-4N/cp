#include<bits/stdc++.h>
using namespace std;
int main(){
    //int t;
   // cin>>t;
  //  while (t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long b[n+1]={0};
        for (int i = 0; i <n ; i++)
        {
            b[i+1]=b[i]+a[i];
        }
        
        for (int i = 0; i < k; i++)
        {
            int x,y;
            cin>>x>>y;
           //cout<<n-x<<' '<<n-x+y<<" ";
           
            cout<<b[n-x+y]-b[n-x]<<endl;
            
             
        }
        
    }
    
    return 0;
}