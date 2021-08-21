#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int a;
    cin>>a;
    long long b=0;
    while(a>1)
    {
        a=a/2;
        b++;
    }
    cout<<b<<endl;
    return 0;
}