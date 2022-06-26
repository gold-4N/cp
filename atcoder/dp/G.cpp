#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int is[1000000];
vector<int>v[1000000];
int sum[1000000];
int dfs(int d)
{
    //if(is[d]==1)return sum[d];
    is[d]=1;
    int r=INT_MIN;
    for (auto i:v[d])
    {
        if(is[i]==0)dfs(i);
        sum[d]=max(sum[d],sum[i]+1);
    }
    
    return sum[d];
}
int main()
{
    int n,k,a,b;
    cin>>n>>k;
    for (int i = 0; i < k; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
    }
    int mx=INT_MIN;
    for (int i = 1; i <=n ; i++)
    {
        mx=max(mx,dfs(i));
        
    }
    cout<<mx<<endl;
    
    return 0;
}
    
		