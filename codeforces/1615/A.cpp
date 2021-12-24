#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    long long a, b=0;
    for (int i = 0; i < n; i++)
 {
      cin >> a;
      b += a;

    }
    if(b%n==0)cout << 0 << endl;
    else cout<<1<<endl;
  }

  return 0;
}