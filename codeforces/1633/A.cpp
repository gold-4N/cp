#include <bits/stdc++.h>

using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    if(n%7==0)cout<<n<<endl;
    else{
      int d=n%7;
      int a=n%10;
      if(a-d<0)cout<<((n/7)+1)*7<<endl;
      else cout<<n-d<<endl;
    }
  }
  return 0;
}