#include <bits/stdc++.h>

using namespace std;
int main()
{
  double t;
  cin>>t;
  double n=t*log10(2);
  double n1=2*log10(t);
 // cout<<n<<" "<<n1<<" ";
  if(n>n1)cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
  return 0;
}		