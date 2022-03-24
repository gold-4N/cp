#include<bits/stdc++.h>
using namespace std;
int c=0;
int isple(string s,int i)
{
    int d=i;
    i++;
    for (;i<s.size();i++)
    {
        if(s[d]!=s[i])continue;
        c++;
        break;
    }
    return i;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        c=0;
        int n;
        string s;
        cin>>n>>s;
            int sum=0,i=0;
            while (i<n-1)
            {
                if(s[i]=='('&&s[i+1]==')')
                {
                    i+=2;
                }
                else if((s[i]=='('&&s[i+1]=='(')||(s[i]==')'&&s[i+1]==')')){
                    i+=2;
                }
                else
                {
                    int d=i+1;
                    while (s[d]=='('&&i<n) d++;
                    if(d==n)break;
                    i=d+1;      
                }
               c++;
                 
            }
            cout<<c<<" "<<n-i<<endl;
           
    }
    
    return 0;
}