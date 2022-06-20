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
        int m=INT_MAX;
        int co;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(m>a[i])
            {
                m=a[i];
                co=i;
            }
        }
        if(n%2==1)cout<<"Mike"<<endl;
        else {
            if(co%2==1)cout<<"Mike"<<endl;
            else cout<<"Joe"<<endl;
        }
    }
    
    return 0;
}
    
