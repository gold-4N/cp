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
    int po=0;
    int a[2000]={0};
    while (n--)
    {
      int s;
      cin>>s;
      if(s<0)s=abs(s);
      //else s+=100;
      //cout<<s<<" ";
      if((a[s]>=2&&s!=0)||(s==0&&a[s]==1))continue;
      a[s]++;
      //cout<<a[s]<<" ";
      po++;
      
    }
    
    cout<<po<<endl;
  }
  
  return 0;
}