#include <bits/stdc++.h>
using namespace std;

int check(int i, vector <int> &a)
{
    return (a[i] > max(a[i-1], a[i+1]) ? 0 : max(a[i-1], a[i+1]) - a[i] + 1);
}

long long fun()
{
    int n; cin >> n;
    vector <int> a(n); for(auto &i: a) cin >> i;
    if(n&1){
        long long cc = 0;
        for(int i = 1; i < n; i += 2) cc += check(i, a);
        return cc;
    }
    vector <long long> l(n/2-1), r(n/2-1); l.front() = check(1, a), r.front() = check(2, a);
    for(int i = 1; i < n/2-1; i++) l[i] = check(2*i+1, a) + l[i-1], r[i] = check(2*i+2, a) + r[i-1];
    long long cc = r.back();
    for(int i = 0; i < n/2-1; i++) cc = min(cc, l[i] + r.back()-r[i]);
    return cc;
}

int main()
{
    int t; cin >> t;
    for(int i = 0; i < t; i++) cout << fun() << '\n';
    return 0;
}