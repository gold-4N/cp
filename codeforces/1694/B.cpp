#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long sum=0;
        for (int i = 0; i < n; i++)
        {
            if(i==0)sum++;
            else if(s[i]==s[i-1])sum++;
            else sum+=i+1;
        }
        cout<<sum<<endl;
    }
    
    return 0;
}
    
