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
   string s,s1;
   cin>>t;
   sort(s1.begin(),s1.end());
   while (t--)
   {
      int n,i;
      cin>>n;
      cin>>s>>s1;
      for (i = 0; i < n; i++)
      {
         if(s[i]!=s1[i])
         {
            if((s[i]=='B'&&s1[i]=='G')||(s[i]=='G'&&s1[i]=='B'))continue;
            else break;
         }
      }
      if(i==n)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
   }
   
   
   return 0;
}