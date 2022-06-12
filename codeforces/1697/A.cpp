#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        long long sum=accumulate(a,a+n,0LL);
        if(k>=sum)cout<<0<<endl;
        else cout<<sum-k<<endl;
    }
    
    return 0;
}