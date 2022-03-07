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
   int n;
   cin>>n;
   while (n--)
   {
       long long a,b,c=-1;
       cin>>a>>b;
       int d=a;
       if(a==1)cout<<b<<endl;
       else{
      c=b/(a*a);
       cout<<c<<endl;}
   }
   
    return 0;
}