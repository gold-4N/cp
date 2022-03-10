#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    vector <int>a;
    a.push_back(2);
    for (int i = 1; i < 19; i++)
    {
        a.push_back(a[a.size()-1]*3);
    }
  // cout<<a[a.size()]<<endl;
    while (t--)
    {
        int n;
        cin>>n;
        if(n<=a.size()){
            cout<<"YES"<<endl;
            for (int i = 0; i < n; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else cout<<"NO"<<endl;        
    }
    
    return 0;
}