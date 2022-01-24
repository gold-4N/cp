#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while(t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        if(a==b && a==1) cout << "NO" << endl;
        else if(a==b && a>1) cout << "YES" << endl;
        else {
            long long d=b-a+1, e=(b/2)-ceil((float)a/2)+1;
            if(c>=d-e) cout << "YES" <<  endl;
            else cout << "NO" << endl;
        } 
    }
    return 0;
}