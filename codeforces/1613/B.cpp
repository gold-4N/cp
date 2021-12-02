#include<bits/stdc++.h>
using namespace std;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
int t;
int n;
cin>>t;
int arr[200001];
while(t)
{
cin>>n;
for(int i=0;i<n;i++) 
{
    cin>>arr[i];
}
sort(arr,arr+n);
for(int i=0;i<n/2;i++)
{
    cout<<arr[i+1]<<" "<<arr[0]<<"\n";
}
t--;
}
    return 0;
}