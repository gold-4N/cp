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
       int s=(int)pow(a,0.5);
       long long s1=(int)pow(a,0.33);
       while (1)
       {
           if((s1*s1*s1)>a){s1--;break;}
           s1++;
       }
       long b=sqrt(s1);
       cout<<s1+s-b<<endl;
              
   }
   
    return 0;
}
