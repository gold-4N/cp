#include<bits/stdc++.h>
using namespace std;
int c=0;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin>>n;
        if(n%2==1)cout<<2<<endl;
        else{
        long long s=n*2;
        long long d=1;
        while (s)
        {
            if(s%2==1)break;
            s/=2;
            d*=2;
        }
        if(s==1)cout<<-1<<endl;
        else cout<<min(d,s)<<endl;
        }
    }
    
    return 0;
}