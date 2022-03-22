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
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x){
            return mid;
            }
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

struct product
{
  long x;
  long w;
};
bool is(product s,product m)
{
  if(s.w<m.w)return true;
  else return false;
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int a,b;
       cin>>a>>b;
       int d=sqrt(a*a+b*b);
     if(a==0&&b==0)cout<<0<<endl;
    else if(d*d==(a*a+b*b))cout<<1<<endl;
       
       else if(a==0||b==0)cout<<1<<endl;
       else cout<<2<<endl;
   }
   return 0;
}
