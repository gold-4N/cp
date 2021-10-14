#include<bits/stdc++.h>
using namespace std;
int t;
int n,k;
int a[10000000];
 int main(){
 	cin>>t;
 	while(t--){
 		cin>>n>>k;
 		int ans=0;
 		int biaoji=0;
 		for(int i=1;i<=k;i++){
 			  scanf("%d",&a[i]);
 			  a[i]=n-a[i];
		 }
		 sort(a+1,a+1+k);
		 for(int i=1;i<=k;i++){
		 	   ans+=a[i];
		 	   if(ans>n-1){
		 	   	   cout<<i-1<<endl;
		 	   	   biaoji=1;
		 	   	   break;
				}
		 }
		 if(biaoji==0){
		 	  cout<<k<<endl;
		 }
		 
	 }
 }
