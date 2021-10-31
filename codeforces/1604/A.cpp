#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long so=0;
        int d=0;
        int c=0;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++){
            
            cin>>a[i];
            if(a[i]>i){
                d=max(d,a[i]-i);
            }
            }
        cout<<d<<endl;
    }
     return 0;
}