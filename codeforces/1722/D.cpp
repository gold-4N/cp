#include<bits/stdc++.h>
using namespace std;
struct Person
{
    int a,b,c;
};
bool compareTwoStudents(Person s1, Person s2)
{
  
        return s1.b < s2.b;
  
}
int main()
{
   
   int t;
   cin>>t;
   string s;
   while (t--)
   {
      
      int n,i;
      cin>>n;
      long long a[n+1]={0};
      cin>>s;
      for(int i=0;i<n;i++)
      {
         if(s[i]=='L')a[i]=i;
         else a[i]=n-i-1;
      }
      long long sum=accumulate(a,a+n,0LL);
      int n1=n-1;
      int co=0;
      for (i = 0; i < n1;)
      {
         if(s[i]=='L'){
            s[i]='R';
            sum=sum-a[i]+(n-i-1);
            cout<<sum<<" ";
            co++;
         }
         if(s[n1]=='R')
         {
            s[n1]='L';
            sum=sum-a[n1]+n1;
            cout<<sum<<" ";
            co++;
         }
         i++;n1--;
      }
      for(;co<n;co++)cout<<sum<<" ";
      cout<<endl;
      
   }
   
   
   return 0;
}