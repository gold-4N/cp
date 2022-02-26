#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=10;
    int a[n],c;
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
        if(a[i]==0)c=i;
    }
    cout<<a[a[a[0]]]<<endl;
    return 0;
}