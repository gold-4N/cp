#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n,l,r,k,sum=0;
        cin>>n>>l>>r>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=l&&a[i]<=r)
            sum+=a[i];
        }
  {
            sort(a,a+n);
            int i,c=0;
            sum=0;
            //for(i=0;i<n;i++)cout<<a[i]<<" "<<endl;
            for(i=0;i<n;i++)
            {
                
                if(a[i]>=l&&a[i]<=r){
                sum+=a[i];
                if(sum>k)break;
                c++;
                }
            }
            cout<<c<<endl;
        }
    }
    return 0;
}