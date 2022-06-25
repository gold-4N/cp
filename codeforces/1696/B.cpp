#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int co=0;
        bool ok=false;
        for (int i = 0; i <n; i++)
        {
            if(a[i]==0)
            {
                if(ok)co++;
                ok=false;
            }
            else ok=true;
        }
        if(ok)co++;
        if(co>1)cout<<2<<endl;
        else cout<<co<<endl;
    }
    
    
    return 0;
}
    
