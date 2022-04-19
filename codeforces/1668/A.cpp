#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--)
  {
      int a,b;
      cin>>a>>b;
      if((a==1&&b>2)||(b==1&&a>2))cout<<-1<<endl;
      else if(a==b)cout<<(a-1)+(b-1)<<endl;
      else {
          long long a1=max(a-1,b-1);
          long long  b1=min(a-1,b-1);
          int d=a1-b1;
          if((a1+b1)%2==1)cout<<b1*2+d*2-1<<endl;
          else cout<<b1*2+d*2<<endl;
      }
  }
    
     return 0; 
}
