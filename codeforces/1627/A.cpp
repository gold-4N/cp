#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,x1,y1,co=0;
        cin>>x>>y>>x1>>y1;
        char a[x+1][y+1];
        for(int i=0;i<x;i++)scanf("%s",a[i]);
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++)
            {
                if(a[i][j]=='B'){
                    co++;
                    break;
                }
            }
        }
        if(co==0)cout<<-1<<endl;
        else {
            if(a[x1-1][y1-1]=='B')cout<<0<<endl;
            else {
                for(int i=0;i<y;i++)if(a[x1-1][i]=='B'){co=0;cout<<1<<endl;break;}
                if(co==0)continue;
                for(int i=0;i<x;i++)if(a[i][y1-1]=='B'){co=0;cout<<1<<endl;break;}
                if(co==0)continue;
                cout<<2<<endl;
            }
        }
    }
    return 0;
}
