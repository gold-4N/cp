#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long sum=0;
    int a[m];
    for(int i=0;i<m;i++)cin>>a[i];
    for(int i=0;i<m-1;i++)
    {
        if(a[i]<=a[i+1])continue;
        else
        {
            sum+=n;
        }

    }
    sum+=a[m-1];
    cout<<sum-1<<endl;
    return 0;
}
