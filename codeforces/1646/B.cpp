#include<bits/stdc++.h>
using namespace std;
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

int main()
{ 
   int t;
   cin>>t;
   while (t--)
   {
       int n;
       cin>>n;
       int a[n];
       for (int i = 0; i < n; i++)
       {
           cin>>a[i];
       }
       sort(a,a+n);
      long long sum=a[n-1];
      long long sum1=a[0]+a[1];
      n--;
      if(sum>sum1)cout<<"YES"<<endl;
      else{
          int c=0;
      for (int i = 2; i <n; i++)
      {
         sum+=a[--n];
         sum1+=a[i];
         if(sum>sum1){ cout<<"YES"<<endl;c=1;break;}   
      }
      if(c==0)cout<<"NO"<<endl;
      }
   }
   
    return 0;
}