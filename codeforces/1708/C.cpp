#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        char s[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int n1=0;
        for(int i=n-1; i>=0; i--)
        {
            if(n1<a[i])
            {
                if(k>n1)
                {
                    n1++;
                    s[i]='1';
                }
                else s[i]='0';
            }
            else s[i]='1';
        }
        for(int i=0; i<n; i++)cout<<s[i];
        cout <<endl;
    }
    return 0;
}
