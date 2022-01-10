#include<bits/stdc++.h>
using namespace std;
int main(){
  char a[1001];
  int ar[200]={0};
  gets(a);
  for(int i=0;i<strlen(a);i++){
    ar[a[i]]++;
  }
  int sum=0;
  //cout<<a<<endl;
  for(int i='a';i<='z';i++)
  {
      //cout<<ar[i]<<" ";
      if(ar[i]>0)sum++;
  }
  cout<<sum<<endl;
  return 0;
}
