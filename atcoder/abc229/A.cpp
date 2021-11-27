#include<bits/stdc++.h>

using namespace std;

int main() {
   char a[3],b[3];
   scanf("%s %s", a,b);
  if((a[1]=='.'&&b[0]=='.')||(b[1]=='.'&&a[0]=='.'))
   cout<<"No"<<endl;
   else cout<<"Yes"<<endl;
     return 0;
}