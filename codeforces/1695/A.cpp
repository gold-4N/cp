#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int mx=INT_MIN;
        int  a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>a[i][j];
                mx=max(a[i][j],mx);
            }
            
        
        }
        //cout<<endl;
        int i=0,j=0;
        bool ok=false;
        if(a[0][0]==mx||a[0][m-1]==mx||a[n-1][0]==mx||a[n-1][m-1]==mx)cout<<m*n<<endl;
        else {
            for ( i = 0; i < n; i++)
            {
                for ( j = 0; j < m; j++)
                {
                    if(a[i][j]==mx){ok=true;break;}
                }
                if(ok)break;
            
            }
       // cout<<i<<' '<<j<<endl;
        cout<<max(i+1,n-i)*max(j+1,m-j)<<endl;
        }
        
    }   

    
    return 0;
}