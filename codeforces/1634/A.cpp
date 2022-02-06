#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long t;
  cin>>t;
  while(t--)
  {
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;
    if(k==0)cout<<1<<endl;
    else{
    string a=s;
    reverse(a.begin(),a.end());
    if(s==a)cout<<1<<endl;
    else cout<<2<<endl;
   }
  }
  return 0;
}