#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    string s;
    cin >> s >> n;
    long long a[27] = {0};
    long long sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
      int d=s[i] - 'a';
      a[d]++;
      sum += (d + 1);
    }
    //cout << 'y' << endl;
    if (sum <= n)
      cout << s << endl;
    else
    {
      int d = sum - n;
      for (int i = 25; i >= 0; i--)
      {
        if (a[i] > 0)
        {
          if (a[i] * (i + 1) <= d)
          {
            d -= (a[i] * (i + 1));
            a[i] = 0;
          }
          else
          {
            if (d % (i + 1) == 0)
            {
              a[i] = a[i] - d / (i + 1);
              d = 0;
            }
            else
            {
              a[i] = a[i] - d / (i + 1) - 1;
              d = 0;
            }
          }
        }
        if (d == 0)
          break;
      }
      for (int i = 0; i < s.size(); i++)
      {
        if (a[s[i]-'a'] > 0)
        {
          cout << s[i];
          a[s[i]-'a']--;
        }
      }

      cout << endl;
    }
  }

  return 0;
}