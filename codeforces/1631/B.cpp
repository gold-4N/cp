#include <bits/stdc++.h>

using namespace std;
int c;
bool isEqu(int a[],int n)
{
  int i;
  for (i = 0; i < n-1; i++)
  {
    if(a[i]!=a[i+1])break;
  }
  if(i==n-1)return true;
  else return false;
  
}
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    c=0;
    int n,d=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
   
      for (int i = n-2;i>=0;)
      {
        if(a[i]!=a[n-1])
         {
          c++;
          i-=d;
          d*=2;
        }
        else {
          i--;
          d++;
        }
      }
      cout<<c<<endl;
    }  
  return 0;
  }  