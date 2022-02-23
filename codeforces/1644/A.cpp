#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int c=0;
        int a[200]={0};
        for (int i = 0; i < s.size()-1; i++)
        {
            if(s[i]==s[i+1]+32){c++;continue;}    
        }
        if(c==s.size()/2)cout<<"YES"<<endl;
        else{
            c=0;
            for (int i = 0; i < s.size(); i++)
            {
                if(s[i]>='a')a[s[i]]++;
                else a[s[i]+32]--;
                if(a['r']<0||a['g']<0||a['b']<0){c=1;break;}
            }
             
        if(c==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        }

        
    }
    return 0;
}