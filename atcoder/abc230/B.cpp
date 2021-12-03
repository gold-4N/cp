#include <bits/stdc++.h>

using namespace std;

int main()
{
  int i;
  string a;
  cin>>a;
  int n1,n2,n3;
  n1=n2=n3=0;
  for(i=0;i<(a.size()-(a.size()%3));i+=3)
  {
    if(a[i]=='x'&&a[i+1]=='x'&a[i+2]=='o')
    {
      n1=1;
    }
    else if(a[i]=='x'&&a[i+1]=='o'&a[i+2]=='x')
    {
      n2=1;
    }
    else if(a[i]=='o'&&a[i+1]=='x'&a[i+2]=='x')
    {
      n3=1;
    }
    else break;
  }
  if(i>(a.size()-(a.size()%3)-1)){
    if(a.size()%3==1){
      
      if(n1==1||n2==1){        
        if(a[i]=='x')cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
      }
      else if(n3==1){
         if(a[i]=='o')cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
      }
    }
    else if(a.size()%3==2){
      if(n1==1){        
        if(a[i]=='x'&&a[i+1]=='x')cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
      }
      else if(n2==1){
        //cout<<a[i]<<" "<<a[i+1];
         if(a[i]=='x'&&a[i+1]=='o')cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
      }
      else if(n3==1){
         if(a[i]=='o'&&a[i+1]=='x')cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
      }
    }
    else cout<<"Yes"<<endl;
  }
  else if(a.size()==1)cout<<"Yes"<<endl;
  else if(a.size()==2){
    if(a[0]=='o'&&a[1]=='o')cout<<"No"<<endl;
    else cout<<"Yes"<<endl;
  }
  else{
   cout<<"No"<<endl;
   }
  // cout<<i<<" "<<n1<<" "<<n2<<" "<<n3<<" "<<a.size()-(a.size()%3)<<endl;;
  return 0;
}