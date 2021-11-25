#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(a==b){
            cout<<(a+b)/4<<endl;
        }
        else if(a>b){
            if(a>=b*3)cout<<b<<endl;
            else  cout<<(a+b)/4<<endl;
            
        }
        else {
            if(b>=a*3)cout<<a<<endl;
            else cout<<(a+b)/4<<endl;
        }
    }
    return 0;
}