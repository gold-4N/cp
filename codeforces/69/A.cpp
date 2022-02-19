#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i]>>b[i]>>c[i];
    }
    int sum1,sum2,sum3;
    sum1=accumulate(a,a+n,0);
    sum2=accumulate(b,b+n,0);
    sum3=accumulate(c,c+n,0);
    if(sum1==0&&sum2==0&&sum3==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}