#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x){
            while (1)
            {
              if(arr[mid-1]==x)mid--;
              else break;
            }
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
  long long a,b,n;
  cin>>a>>b>>n;
  long long h=a/n,w=b/n;
  if(a%n==0&&b%n==0)cout<<(h*w)<<endl;

  else if(a%n==0&&b%n!=0)cout<<(h*w)+h<<endl;
  else if(a%n!=0&&b%n==0)cout<<(h*w)+w<<endl; 
  else cout<<(h*w)+h+w+1<<endl;
  return 0;
}