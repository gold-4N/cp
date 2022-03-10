#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        n--;
        long long p=2<<n;
        cout<<p-1<<endl;
    }
    
    return 0;
}