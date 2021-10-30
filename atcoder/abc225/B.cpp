#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    int s=0,ss[t]={0};
    t--;
    int a,b,i;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        ss[a-1]++;
        ss[b-1]++;
    }
    for(i=0;i<=t;i++)
    {
        if(ss[i]==t){
            s=1;
        }
    }
    if(s==1)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}