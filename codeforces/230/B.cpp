#include<bits/stdc++.h>
using namespace std;
bool check_prime(long long n) {
  bool is_prime = true;
  if (n == 0 || n == 1) {
    is_prime = false;
  }

  for (long long i = 2; i*i <= n; ++i) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
  }

  return is_prime;
}
int main()
{
   int n;
   cin>>n;
   while(n--)
   {
       long long a;
       cin>>a;
       long long s=sqrt(a);
       if(s*s==a){
           if(check_prime(s))cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }
       else cout<<"NO"<<endl;
   }
   return 0;
}
