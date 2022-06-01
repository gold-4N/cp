#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;  
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int n1=n;
    while (n1--)
    {
      if(s[n1]=='1')break;
    }
    if(n-n1-1<=k)
    { swap(s[n1],s[n-1]);
      k-=(n-n1-1);
    }
    bool ok=false;
    for (int i = 0; i < n-1; i++)
    {
      if(s[i]=='1'){
       // if(n1==i)n1=INT_MAX;
        ok=true;
         n1=i;
        break;
      }
    }
    if(n1<=k&&ok)swap(s[n1],s[0]);
  //  cout<<s<<endl;
    long long sum=0;
    for (int i = 0; i < n-1; i++)
    {
       if(s[i]=='0'&&s[i+1]=='1')sum++;
       else if(s[i]=='1'&&s[i+1]=='1')sum+=11;
       else if(s[i]=='1'&&s[i+1]=='0')sum+=10;
    }
    cout<<sum<<endl;
    
  }
   return 0;
}
