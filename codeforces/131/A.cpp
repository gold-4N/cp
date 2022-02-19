#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int u=0,l=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>='A'&&s[i]<='Z')u++;
        else l++;
    }
    if((l==1&&s[0]>='a'&&s[0]<='z')||l==0)
   { 
       if(l==1)cout<<(char)toupper(s[0]);
       else cout<<(char)tolower(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        cout<<(char)tolower(s[i]);
    }
   }
   else cout<<s<<endl;
    return 0;
}