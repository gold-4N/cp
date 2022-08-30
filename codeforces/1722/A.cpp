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
   string s,s1="Timur";
   cin>>t;
   sort(s1.begin(),s1.end());
   while (t--)
   {
      int n;
      cin>>n;
      cin>>s;
      if(n!=5)cout<<"NO"<<endl;
      else {
         sort(s.begin(),s.end());
         if(s==s1)cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
      }
   }
   
   
   return 0;
}