#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        string s,s1;
        cin>>s>>s1;
        bool ok=false;
        for (int j=m-1,i = n-1; j>0; i--,j--)
        {
            if(s[i]!=s1[j])
            {
                ok=true;
                break;
            }
        }
        if(ok)cout<<"NO"<<endl;
        else
        {
            for (int i = 0; i <= n-m; i++)
            {
                if(s[i]==s1[0])
                {
                    ok=true;
                    break;
                }
            }
            if(ok)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
