#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        int i=a.size()-1;
        for(;i>0;i--) 
        {
            if(a[i]-48+a[i-1]-48>9){
                break;
            }
        }
        if(i>1)
        {
           
            for (int j = 0; j < i-1; j++)
            {
                cout<<a[j];
            }
             cout<<a[i]+a[i-1]-96;
             i++;
             for ( ; i < a.size(); i++)
            cout<<a[i];
        }
        else {
            cout <<a[0]+a[1]-96;
            for (int i = 2; i < a.size(); i++)cout<<a[i];
            
            
        }
      cout<<endl;
        
    }
    return 0;
}
