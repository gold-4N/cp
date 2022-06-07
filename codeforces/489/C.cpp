#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int mi=0;
  if(n==1&&m<10)cout<<m<<" "<<m<<endl;
  else if(m==0||(n==1&&m>9))cout<<"-1 -1\n";
  else if(m<10)
  {
    cout<<1;
    for (int i = 0; i < n-2; i++)
    cout<<0;
    cout<<m-1<<" ";
    cout<<m;
    for (int i = 0; i < n-1; i++)
    cout<<0;cout<<endl;   
    
  }
  else{
  int d=m;
  vector<int>v;
  while(d){
  for (int i = 9; i > 0; i--)
  {
    if(d-i>=0){v.push_back(i);d-=i;break;}
  }
  }
  if(v.size()>n)cout<<"-1 -1"<<endl;
  else if(v.size()==n)
  {
    for (int i = v.size()-1; i >=0 ; i--)cout<<v[i];
    cout<<" ";
    for (int i = 0; i < v.size(); i++)
    cout<<v[i];cout<<endl;   
  }
  else
  {
    int n1=n;
    if(v[v.size()-1]>1){cout<<1;n1--;}
    else cout<<v[v.size()-1];
    for (int i = 0; i <n1-v.size(); i++)cout<<0;
    if(v[v.size()-1]>1)cout<<v[v.size()-1]-1;
    for (int i = v.size()-2; i >=0; i--)
    cout<<v[i];
    cout<<" ";
    for (int i = 0; i <v.size(); i++)
    cout<<v[i];
    for (int i = 0; i <n-v.size(); i++)
    cout<<0;cout<<endl;
    
    
        
  }
  }
  return 0;
}
