#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
   // sort(a,a+3);
    int sum=0;
    sum=max(sum,a[0]*a[1]*a[2]);
    sum=max(sum,a[0]+a[1]+a[2]); 
    sum=max(sum,a[0]+(a[1]*a[2]));
    sum=max(sum,(a[0]*a[1])+a[2]);
    sum=max(sum,(a[0]+a[1])*a[2]);
    sum=max(sum,a[0]*(a[1]+a[2]));
    cout<<sum<<endl;
    return 0;
}