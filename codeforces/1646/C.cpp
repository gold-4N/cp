#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
vector<ll>a;
void solve(){
	int n=a.size();
	ll k;cin>>k;
	int ans=2e9;
	for(int i=0;i<(1<<n);i++){
		ll tot=0;
		for(int j=0;j<n;j++){
			if(i>>j&1) tot+=a[j];
		}
		if(tot<=k){
			ans=min(ans,__builtin_popcount(i)+__builtin_popcountll(k-tot));
		}
	}
	cout<<ans<<'\n';
}
int main() {
	
    a.pb(1);
  	int cnt=2;
  	while(a.back()*cnt<=1e12){
  		a.pb(a.back()*cnt);
  		++cnt;
  	}
  	// cout<<a.size()<<endl;
  	int tt;
  	cin>>tt;
  	while(tt--){
  		solve();
  	}
	return 0;
}