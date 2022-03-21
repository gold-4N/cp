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
       long n,m;
       cin>>n>>m;
       vector<long>a;
       struct product p[m];
       map<long ,long>mp;
       for (long i = 0; i < m; i++){
       cin>>p[i].x>>p[i].w;
       mp.insert({p[i].x,i+1});
   }
       sort(p,p+m,is);
       long sum=0;
       for (long i = 0; i < 2*n; i++)
       {
        sum+=p[i].w;
        long pi=p[i].x;
        a.push_back(pi);
       }
       sort(a.begin(),a.end());
       cout<<sum<<endl;
       long k=2*n-1;
       for (long i = 0; i <n; i++)
       {
         cout<<mp[a[i]]<<" "<<mp[a[k--]]<<endl;
       }
       
   }
   return 0;
}
