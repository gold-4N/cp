#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   while (n--)
    {
        string a;
        cin>>a;
        int a1=0,a0=0;
        for (int i = 0; i < a.size(); i++)
        {
            if(a[i]=='1')a1++;
            else a0++;
        }
        if(a.size()<=2) cout<<0<<endl;
        else if(a1==a0){
           cout<<a1-1<<endl;
           }
        else cout<<min(a0,a1)<<endl; 
    }
    
    return 0;
}