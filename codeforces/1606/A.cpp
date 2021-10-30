#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int ab=0,ba=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='a'&&a[i+1]=='b')ab++;
            else if(a[i]=='b'&&a[i+1]=='a')ba++;
        }
        if(ab>ba) a[0]='b';
		else if(ba>ab) a[a.length()-1]='b';
		cout<<a<<endl;
    }
}