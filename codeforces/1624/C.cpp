#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        long a[n];
        bool b[n+1]={false};
        bool k=true;
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++){
                while(a[i]>n||b[a[i]])
                    a[i]/=2;
                if(a[i]>0)b[a[i]]=true;
                else {
                    k=false;
                    break;
                }
        }
        
        if(k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
