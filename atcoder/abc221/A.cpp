  #include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a,n;
    cin>>n>>a;
    if(n>a){
      long long sum=1;
      for(int i=1;i<=n-a;i++)
      {
        sum=sum*32;
      }
      cout<<sum;
    }
    else cout<<"1";
    return 0;
 }