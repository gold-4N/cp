#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s,s1;
        cin>>s;
        if(s[0]=='9')
        {
            for (int i = n-1; i >= 0; i--)
            {
                int d=11-s[i]+'0';
                if(i>0&&d<10)s[i-1]++;
                //cout<<d<<' ';
                if(d==11)s1+='1';
                else if(d==10)s1+='0';
                else s1+=d+'0';
            }
            reverse(s1.begin(),s1.end());
        }
        else {
            for (int i = 0; i < n; i++)
            {
                s1+=('9'-s[i])+'0';
            }
            
        }  
       for (int i = 0; i < n; i++)
       {
        cout<<s1[i];
       }
       cout<<endl;
    }   

    
    return 0;
}