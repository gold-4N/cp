#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    if(n>=m){
    for (int i = 0; i < m; i++)cout<<"01";
    for (int i = 0; i < n-m; i++)
    cout<<0;
    }
    else {
        for (int i = 0; i < n; i++)cout<<"01";
        for (int i = 0; i < m-n; i++)cout<<1;
    }
    cout<<endl;
    }
    return 0;
}