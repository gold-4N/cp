#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,b,x,y;
        cin>>n>>b>>x>>y;
        int a[n+1]={0};
        long long sum=0;
        for (int i = 1; i <=n; i++)
        {
            if(a[i-1]+x>b)a[i]=a[i-1]-y;
            else a[i]=a[i-1]+x;
            sum+=a[i];            
        }
        cout<<sum<<endl;
    }
    
    return 0;
}