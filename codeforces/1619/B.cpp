#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while (t--)
   {
       long long a;
       cin>>a;
       int s=(int)sqrt(a);
       long long s1=(int)cbrt(a); 
       long b=sqrt(s1);
       cout<<s1+s-b<<endl;
              
   }
   
    return 0;
}
