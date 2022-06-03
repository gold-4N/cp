#include<bits/stdc++.h>
using namespace std;
int main()
{
  //int t;
  //cin>>t;  
 // while(t--)
  {
    int n;
    cin>>n;
    long long a;
    for(int i=0;i<n;i++)
    {
      cin>>a;
      int sum=0;
      bool is=false;
      int co=0;
      while(a)
      {
        if(a%2==1)
        {
          is=true;
          co++;
          if(co==2)break;
        }
        if(!is)sum++;
        a/=2;
      }
      long long d=1;  
      d=d<<sum;
      //cout<<sum<<" ";
      if(sum==0&&a==0)cout<<3<<endl;
      else if(co==2){

        cout<<d<<endl;
        }
      else 
      {
        cout<<d+1<<endl;
      }
    }
    
  }
   return 0;
}