#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

#define pi acos(-1.0)
#define ll long long int
#define sc scanf
#define pf printf
#define fin for(ll i=0; i<n; i++)
#define fjm for(ll j=0; j<m; j++)
#define fr(i,a,n) for(ll i=a; i<n; i++)
#define rf(i,n,a) for(ll i=n-1; i>=a; i--)
#define pb push_back
#define INF 1e18
#define nl "\n"
#define readfirst() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

void OJ() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    #endif
}

ll gcd(ll p, ll q) {
    return q==0?p:gcd(q,p%q);
}

void ToH(int n, int s, int a, int d) {
    if(n==1) {
        cout << "move " << n << "th disk from " << s << " To "  << d << nl;
        return;
    }
    ToH(n-1,s,d,a);
    cout << "move " << n << "th disk from " << s << " To "  << d << nl;
    ToH(n-1,a,s,d);
}

bool chk(int n) {
    if(n <= 1)
        return false;
    for(int i = 2; i < n; i++)
        if(n % i == 0)
            return false;
    return true;
}

int main() {
    readfirst();
    //OJ();

    ll t, n, m;
    cin >> t;
    while(t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        if(a==b && a==1) cout << "NO" << nl;
        else if(a==b && a>1) cout << "YES" << nl;
        else {
            ll d=b-a+1, e=(b/2)-ceil((float)a/2)+1;
            if(c>=d-e) cout << "YES" <<  nl;
            else cout << "NO" << nl;
        } 
    }

    return 0;
}