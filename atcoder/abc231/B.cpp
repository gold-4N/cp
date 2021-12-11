#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a[100];
    int n;
    cin>>n;
    int as[n]={0};
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j]&&a[i]!="-1")
            {   
                as[i]++;
            }
        }
    }
    int ma=0;
    for(int i=1;i<n;i++)
    {
        if(as[0]<as[i])
        {
            as[0]=as[i];
            ma=i;
        }
    }
    cout<<a[ma];
    return 0;
}
