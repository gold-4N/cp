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
   double a,b,c,x;
   cin>>a>>b>>c>>x;
   if(b<x)cout<<0<<endl;
   else if(a<x)cout<<c/(b-a)<<endl;
   else cout<<"1.000000"<<endl;
    return 0;
}