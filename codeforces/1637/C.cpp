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
        long long c=0;
        for (int i = 0; i < n; i++){
            cin>>a[i];
            if(a[i]>1)c++;
        }
        if(a[0]>1)c--;
        if(a[n-1]>1)c--;
        if(c==0||(n==3&&a[1]%2!=0))cout<<-1<<endl;
        else {
            c=0;
            for (int i = 1; i<n-1; i++)
            {
                c=c+(a[i]+1)/2;
            }
            cout<<c<<endl;
        }
        
    }
    
    return 0;
}