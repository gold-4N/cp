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
       int a[n],b[n],c[n+1];
       string s;
       vector<int>v,v1;
       int con=n-1;
       for(int i=0;i<n;i++){cin>>a[i];b[i]=a[i];c[a[i]]=i;}
       cin>>s;
       sort(b,b+n);
       for (int i = 0; i < n; i++)if(s[i]=='1'){v.push_back(a[i]);}else v1.push_back(a[i]);
       sort(v.begin(),v.end()); 
       sort(v1.begin(),v1.end());
       if(v.size()==n||v.size()==0)
       for (int i = 0; i<n; i++)cout<<a[i]<<" ";
       else
       {
           while (!v.empty())
           {
               a[c[v[v.size()-1]]]=b[con--];
               v.pop_back();
           }
           while (!v1.empty())
           {
                a[c[v1[v1.size()-1]]]=b[con--];
               v1.pop_back();
           }
           
          for (int i = 0; i<n; i++)cout<<a[i]<<" ";
       }

       cout<<endl;
        
   }
   
    return 0;
}