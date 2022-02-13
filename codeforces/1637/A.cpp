#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    long long a[n],b[n];
    for (int i = 0; i < n; i++)
      cin>>a[i];
bool c=false;
for (int i = 0; i < n-1; i++)
    if(a[i]>a[i+1]){cout<<"YES"<<endl;c=true;break;}
    
   if(!c) cout<<"NO"<<endl;
          
  }
  return 0;
}