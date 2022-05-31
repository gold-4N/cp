#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;  
  while(t--)
  {
    int n;
    cin>>n;
    int a[n],b[n];
   // vector<int>v[n];
    //int n1;
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
      b[i]=i+1;
    }
      bool ok=false;
      for (int i = n-1; i > 0 ; i--)
      {
         if(a[i]==a[i-1])swap(b[i],b[i-1]);
         else if(a[i]>a[i-1])
         {
           if(b[i]==i+1){
             ok=true;
             break;
           }
         }
      }
      if(ok||n==1||a[0]!=a[1])cout<<-1;
      else for (int i = 0; i < n; i++)
      {
        cout<<b[i]<<" ";
      }
      cout<<endl;
      
    
  }
   return 0;
}
