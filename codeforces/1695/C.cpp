#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m],mi[n][m],mx[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>a[i][j];
                if(i>0&&j>0)
                {
                    mx[i][j]=max(mx[i][j-1],mx[i-1][j])+a[i][j];
                    mi[i][j]=min(mi[i][j-1],mi[i-1][j])+a[i][j];
                }
                else if(i>0){
                    mx[i][j]=mi[i][j]=mi[i-1][j]+a[i][j];
                }
                else if(j>0) mx[i][j]=mi[i][j]=mi[i][j-1]+a[i][j];
                else  mx[i][j]=mi[i][j]=a[i][j];
            }
            
        }
        if((m+n)%2==0)cout<<"NO"<<endl;
        else {
            if(mi[n-1][m-1]<= 0 && mx[n-1][m-1]>=0)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        
    }
    
    return 0;
}
    
