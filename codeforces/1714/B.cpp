#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
    int n;
    cin>>n;
    int a[n];
    int b[n+1]={0};
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    int i;
    for(i=n-1;i>=0;i--)
    {
      if(b[a[i]]==0)b[a[i]]++;
      else{
        break;
      }
    }
    cout<<i+1<<endl;
   }
   
   return 0;
}