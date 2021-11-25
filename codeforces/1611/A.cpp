#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int l=a.size();
        int b=a[l-1]-'0';
        int b1=a[0]-'0';
        if(b%2==0)cout<<0<<endl;
        else if(b1%2==0)cout<<1<<endl;
        else {
            int c=0;
            for(int i=1;i<a.size();i++)
            {
                if((a[i]-'0')%2==0){
                    cout<<2<<endl;
                    c=1;
                    break;
                
                }
            }
            if(c==0)cout<<-1<<endl;
        }
    }
    return 0;
}