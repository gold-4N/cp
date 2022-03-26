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
int sumof(long long s)
{
  int sum=0;
  int d=log10(s)+1;
  if(d==1)return s;
  else {
    while(s>0)    
      {    
      int m=s%10;    
      sum=sum+m;    
      s=s/10;    
      }  
      return sumof(sum);
  }
}
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    sort(a,a+n);
    int i=0,j=1;
    bool ok=false;
    while (i<n&&j<n)
    {
      if(a[i]+k==a[j]){ok=true;break;}
      else if(a[i]+k>a[j])j++;
      else i++;
    }
    if(ok)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  
   return 0;
}
