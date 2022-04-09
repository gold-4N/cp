#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,sum;
  cin>>t;
  map<int,int>v;
  while (t--)
  {
    sum=0;
    int n,a;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
      cin>>a;
      if(v.find(a)==v.end())v.insert({a,1});
      else v[a]++;
    }
    if(v.size()==1)cout<<0<<endl;
    else{
      auto pr = std::max_element(v.begin(), v.end(), [](const auto &x, const auto &y) {
                    return x.second < y.second;
                });
      int d=pr->second;
     // cout<<d<<" ";
      //d++;
      n-=d;
      while(1)
      {
        if(n==0)break;
        if(d>n){
          
          sum=sum+1;
          sum+=n;
          break;
        }
        sum=sum+1;
        sum+=d;
        n-=d;
        d*=2;
       // cout<<d<<" ";

      }
      cout<<sum<<endl;
    }
    v.clear();
  }
    
  return 0;
}
