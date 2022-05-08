#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  string s,sc;
  while (t--)
  {
    int n;
    cin>>n;
    string a;
    cin>>a;
    int co=0;
    for (int i = 0; i <n-1; i+=2)
    {
      if(a[i]!=a[i+1])co++;

    }
    cout<<co<<endl;    
  }
    

    
  return 0;
}
