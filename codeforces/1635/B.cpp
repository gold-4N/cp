#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,c=0;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin>>a[i];
        for (int i = 1; i < n-1; i++)
        {
            if(a[i]>a[i-1]&&a[i+1]<a[i]){
                if(a[i]<=a[i+2]&&i<(n-3))a[i+1]=a[i+2];
               // else if(a[i-1]==a[i+1])a[i]=a[i-1];
                else a[i+1]=a[i];
                c++;
                i++;
            }
        }
        cout<<c<<endl;
        for (int i = 0; i < n; i++)
        cout<<a[i]<<" ";cout<<endl;
        
    }
    return 0;
}