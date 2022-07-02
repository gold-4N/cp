#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,a[3];
  cin>>n>>a[0]>>a[1]>>a[2];
  int d[n+1]={0};
  d[0]=1;
  sort(a,a+3);
  for (int i = 0; i < 3; i++)
  {
    for (int j = 1; j <=n; j++)
    {
        if(j-a[i]==0)d[j]=max(1,d[j]);
        else if(j-a[i]>0&&d[j-a[i]]>0)d[j]=max(d[j-a[i]]+1,d[j]);
        //cout<<d[j]<<' ';
    }
  //  cout<<endl;
  }
  cout<<d[n]<<endl;
   
   return 0;
}