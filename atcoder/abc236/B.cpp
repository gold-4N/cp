#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n+1]={0};
  for (int i = 0; i < 4*n-1; i++)
  {
    int s;
    cin>>s;
    a[s]++;
  }
  for (int i = 1; i <=n; i++)
  {
    if(a[i]<4){cout<<i<<endl;break;}
  }
  
  return 0;
  }  