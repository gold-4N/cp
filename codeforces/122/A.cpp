#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 1;i*4<=1000; i++)v.push_back(i*4);
    for (int i = 1;i*7<=1000; i++)v.push_back(i*7);
    v.push_back(47);
    v.push_back(477);
    v.push_back(474);
    v.push_back(74);
    v.push_back(774);
    v.push_back(744);
    sort(v.begin(),v.end());
    int c=0;
    for (int i = 0; v[i] <= n; i++)
    {
        if(n%v[i]==0){cout<<"YES"<<endl;c=1;break;}
    }
    if(c==0)cout<<"NO"<<endl;
    return 0;
}