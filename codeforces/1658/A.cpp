#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     int n;
     string s;
     cin>>n>>s;
     int a[2]={0};
     int sum=0;
     for (int i = 0; i < n-1; i++)
     {
         if(s[i]=='0'&&s[i+1]=='1'){
             if(i+2<n){
                 if(s[i+2]=='0')
                  sum++;
             }
            // else if(i+2==n)sum++;
            
             }
         else if(s[i]=='0'&&s[i+1]=='0')sum+=2;
     }
    
    cout<<sum<<endl;
 }
  return 0;
}
