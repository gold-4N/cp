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
   map<string,int>mp;
   while (t--)
   {
      
      int n,i;
      int co=0,co1=0,co2=0;
      cin>>n;
      string s[n],s1[n],s2[n];
      for (i = 0; i < n; i++){cin>>s[i];mp[s[i]]=1;}
      for (i = 0; i < n; i++){cin>>s1[i];mp[s1[i]]++;}
      for (i = 0; i < n; i++){cin>>s2[i];mp[s2[i]]++;}
      for(i=0;i<n;i++)
      {
         if(mp[s[i]]==2)co++;
         else if(mp[s[i]]==1)co+=3;
         if(mp[s1[i]]==2)co1++;
         else if(mp[s1[i]]==1)co1+=3;
         if(mp[s2[i]]==2)co2++;
         else if(mp[s2[i]]==1)co2+=3;
        
      } 
      cout<<co<<" "<<co1<<" "<<co2<<endl;
      
      mp.clear();
   }
   
   
   return 0;
}