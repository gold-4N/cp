#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int co=0;
        int s[200];
        for(int i=0;i<a.size();i++)
        {
            s[a[i]]=i+1;
        }
        for(int i=0;i<b.size()-1;i++)
        {
            co+=abs(s[b[i]]-s[b[i+1]]);
        }
        cout<<co<<endl;
    }
    return 0;
}