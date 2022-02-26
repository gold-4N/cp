#include<bits/stdc++.h>
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
    int n,m;
    cin>>n>>m;
    int b[m],a[n];
    
    for(int i=0;i<n;i++){cin>>a[i];}
    for (int i = 0; i < m; i++)cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int i,l=0;
    for (i = 0; i < n; i++)
    {
        if(l==m)break;
        if(a[i]==b[l])l++;
    }
    if(l==m)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}