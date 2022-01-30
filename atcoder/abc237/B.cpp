#include <bits/stdc++.h>

using namespace std;
int main()
{
  long long h,w;
  cin>>h>>w;
  long long a[h][w];
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j <w; j++)
    {
      cin>>a[i][j];
    }
    
  }
  for (int i = 0; i < w; i++)
  {
    for (int j = 0; j <h; j++)
    {
      cout<<a[j][i]<<" ";
    }
    cout<<endl;
  }
  return 0;
}