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
    int d=n/3;
    if(n%3==2)cout<<d+1<<" "<<d+2<<" "<<d-1<<endl;
    else if(n%3==1) cout<<d<<" "<<d+2<<" "<<d-1<<endl;
    else  cout<<d<<" "<<d+1<<" "<<d-1<<endl;
  }
  return 0;
}
