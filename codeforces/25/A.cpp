#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
  int a[n];
  int as[2]={0,0};
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
    as[a[i]%2]++;
  }
  if(as[0]==1)
  {
    for (int i = 0; i < n; i++)
    {
      if(a[i]%2==0){cout<<i+1<<endl;break;}
    }
  }  
  else 
  {
    for (int i = 0; i < n; i++)
    {
      if(a[i]%2==1){cout<<i+1<<endl;break;}
    }
  } 
   return 0;
}
