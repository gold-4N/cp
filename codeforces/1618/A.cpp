#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
   
    int a[7];
    for(int i=0;i<7;i++)cin>>a[i];
    sort(a,a+7);
    if(a[0]+a[1]+a[2]==a[6])cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    else if(a[0]+a[1]+a[3]==a[6])cout<<a[0]<<" "<<a[1]<<" "<<a[3]<<endl;
    else if(a[0]+a[2]+a[3]==a[6])cout<<a[0]<<" "<<a[2]<<" "<<a[3]<<endl;
    }
    return 0;
}
