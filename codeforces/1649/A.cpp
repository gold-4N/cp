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
       int c=0,d=0;
       for (int i = 0; i < n; i++)
       {
           cin>>a[i];
           if(a[i]==0&&c==0){c=1;d=i-1;}
       }
      while (n--)
      {
          if(a[n]!=1)break;
      }
      cout<<n-d+1<<endl;
    }
   
    return 0;
}