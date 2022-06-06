#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
     int n,k;
     cin>>n>>k;
     int a[n];
     set<int>s;
     for (int i = 0; i < n; i++)
     {
       cin>>a[i];
       s.insert(a[i]);
     }
     sort(a,a+n);
     if(k==0)cout<<s.size()<<endl;
     else if(a[0]!=0)
     {
      s.insert((a[n-1]+1)/2);
       cout<<s.size()<<endl;
     }
     else 
     {
       int d=-1;
       for (int i = 1; i < n; i++)
       {
         if(a[i]-a[i-1]>1){d=a[i-1]+1;break;}
       }
       if(d==-1)cout<<s.size()+k<<endl;
       else 
       {
         s.insert((d+a[n-1]+1)/2);
         cout<<s.size()<<endl;
       }
     }
     s.clear();
     
   }
    
  return 0;
}
