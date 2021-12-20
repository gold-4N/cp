#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    
    char a[1000];
    scanf("%s", a);
    int l=strlen(a);
     int s=l/2;
     int i;
     if(l%2==1)cout<<"NO"<<endl;
     else{
     for (i = 0; i < l/2; i++)
     {
       if(a[i]!=a[s])break;
       s++;
     }
     if(i==l/2&&l!=1)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
     }
  }
  
  return 0;
}