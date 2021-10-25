#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n=0;
        char s='z';
        string a="\0";
        cin>>a;
        for(int i=0;i<a.size();i++)
        {
            if(s>a[i]){
                s=a[i];
                n=i;
            }
            
        }
        cout<<s<<" ";
        for(int i=0;i<a.size();i++)if(n!=i)cout<<a[i];
        cout<<endl;
    }
}