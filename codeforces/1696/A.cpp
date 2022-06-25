#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        ll n,z;
        cin>>n>>z;
        ll a[n];
        ll mx=LONG_LONG_MIN,mx1=LONG_LONG_MIN;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            mx=max(mx,a[i]|z);
            mx=max(mx,a[i]&z);
            mx1=max(mx1,a[i]);
        }
        
        cout<<max(mx,mx1)<<endl;
    }
    
    
    return 0;
}
    
