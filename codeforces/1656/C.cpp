#include<bits/stdc++.h>
using namespace std;
int c=0;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin>>a[i];
        bool ze,on;
        sort(a,a+n);
        ze=binary_search(a,a+n,0);
        on=binary_search(a,a+n,1);
        if(ze&&on)cout<<"NO"<<endl;
        else if(ze){
            cout<<"YES"<<endl;
        }
        else if(on){
            int i;
            for (i = 0; i <n-1; i++)
            if(abs(a[i]-a[i+1])==1)break;
            if(i==n-1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
          
       
    }
    
    return 0;
}