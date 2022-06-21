#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        long long co=0;
        int p=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]!=0)p=i;
        }
        int i;
        for ( i = 0; i < n; i++)
        {
            
            co+=a[i];
            if(co<=0)break;
        }
        if(co==0&&p==i)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }   

    
    return 0;
}