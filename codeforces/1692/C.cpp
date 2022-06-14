#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        string s[8];
        for(int i=0;i<8;i++)cin>>s[i];
        bool ok=false;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if(s[i][j]=='#')
                {
                    if(i==0)
                    {
                        if(s[i+1][j-1]=='#'&&s[i+1][j+1]=='#')
                        {
                            ok=true;
                            cout<<i+1<<' '<<j+1<<endl;
                            break;
                        }
                    }
                    else if(j==0)
                    {
                        if(s[i-1][j+1]=='#'&&s[i+1][j+1]=='#')
                        {
                            ok=true;
                            cout<<i+1<<' '<<j+1<<endl;
                            break;
                        }
                    }
                    else if(i==7)
                    {
                        if(s[i-1][j-1]=='#'&&s[i-1][j+1]=='#')
                        {
                            ok=true;
                            cout<<i+1<<' '<<j+1<<endl;
                            break;
                        }
                    }
                    else if(j==7)
                    {
                        if(s[i-1][j-1]=='#'&&s[i+1][j-1]=='#')
                        {
                            ok=true;
                            cout<<i+1<<' '<<j+1<<endl;
                            break;
                        }
                    }
                    else 
                    { 
                
                        if(s[i-1][j+1]=='#'&&s[i+1][j+1]=='#')
                        {
                            ok=true;
                            cout<<i+1<<' '<<j+1<<endl;
                            break;
                        }
                    
                    }
                }

            }
            if(ok)break;
        }
        
    }
    
    return 0;
}