#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x=1;
        cin>>n;
       int a[n+1]={-1};
       for(int i=1;i<=n;i++){
        cin>>a[i];
       }
       sort(a,a+n+1);
       for(int i=1;i<=n;i++)
       {
           if(a[i]!=a[i-1])cout<<a[i]<<" ";
       }
       for(int i=1;i<=n;i++)
       {
           if(a[i]==a[i-1])cout<<a[i]<<" ";
       }
       cout<<endl;
    }

    return 0;
}
