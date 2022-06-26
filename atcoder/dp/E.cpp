#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
ll s[101][100001];
int main()
{
    int t,k;
    cin>>t>>k;
    ll a[t],b[t]={0};
    for(int i=0;i<t;i++)
    cin>>a[i]>>b[i];
   
    for (int i = 0; i <= t; i++)
    for (int j = 0; j <=100000; j++)
    {
      s[i][j]=1e15;
    }
    s[0][0]=0;
    for (int i = 1; i <= t; i++)
    {
        for (int j = 0; j <=100000 ; j++)
        {
            if(j-b[i-1]<0)
            s[i][j]=s[i-1][j];
            else s[i][j]=min(s[i-1][j],s[i-1][j-b[i-1]]+a[i-1]);
        }
        
    }
    for (int i = 100000; i >= 0; i--)
    if(s[t][i]<=k){
    cout<<i<<endl;
    break;
    }
    
    return 0;
}
    
