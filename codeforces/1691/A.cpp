#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;  
  while(t--)
  {
    int n;
    cin>>n;
    int a[2]={0,0};
    int n1;
    for (int i = 0; i < n; i++)
    {
      cin>>n1;
      a[n1%2]++;
    }
    cout<<min(a[0],a[1])<<endl;
  }
   return 0;
}
