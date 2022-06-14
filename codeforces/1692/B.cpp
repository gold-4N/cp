#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n;
        int a[n];
        int co[10005]={0};
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            co[a[i]]++;
        }
        sort(co,co+10005);
         k=10005;
        long long sum=0,cop=0;
 
        while (k--)
        {
            if(co[k]==0)break;
            else if(co[k]%2==0)sum++;
            else cop++;        
        }
       if(sum%2==1)cout<<cop+sum-1<<endl;
       else cout<<cop+sum<<endl;

    }
     
   
   return 0;
}