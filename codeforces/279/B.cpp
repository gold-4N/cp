#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n,t;
    cin>>n>>t;
    long long a[n+1],i,j=-1,sum=0,ans=0;
    for(i=0;i<n;i++){
        cin>>a[i];
        }
      for(i=0;i<n;i++)
        {
            if(sum+a[i]<=t)
                sum+=a[i];
            else
            {
                sum+=a[i];
                while(sum>t)
                {
                    j++;
                    sum-=a[j];
                }
            }
            ans=max(ans,i-j);
        }
        cout<<ans<<endl;

    return 0;
}
