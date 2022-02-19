#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        
        if(s[i]=='a'||s[i]=='A'||s[i]=='o'||s[i]=='O'||s[i]=='y'||s[i]=='Y'||s[i]=='e'||s[i]=='E'||s[i]=='u'||s[i]=='U'||s[i]=='i'||s[i]=='I')s[i]='.';
        else {
        if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+32;
        if(i==0||s[i-1]!='.')cout<<"."<<s[i];
       
        else cout<<s[i-1]<<s[i];
        }
    }
    
    return 0;
}