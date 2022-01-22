#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];
    ans=a[0];
    for (int i = 0; i < n-1; i++){
        if(a[i]==ans&&ans<a[i+1])ans=a[i+1];
         else if(a[i]!=a[i+1])break;}
    for (int i = 0; i < n; i++)
    {
        if(ans!=a[i])cout<<a[i]<<" ";
    }
    cout<<endl;
    
        
    return 0;
}