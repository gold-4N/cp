#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    int d[n][m];
    int co = 1, co1 = 1;
    for (int i = 0; i < n; i += 2)
    {
      co1 = 1;
      for (int j = 0; j < m; j += 2)
      {

        if (co1 == 1)
        {
          if (co == 1)
          {
            d[i][j] = 1;
            d[i][j + 1] = 0;
            d[i + 1][j] = 0;
            d[i + 1][j + 1] = 1;
          }
          else
          {
            if (d[i - 2][j] == 1 && d[i - 1][j] == 0 && d[i - 2][j + 1] == 0 && d[i - 1][j + 1] == 1)
            {
              d[i][j] = 0;
              d[i][j + 1] = 1;
              d[i + 1][j] = 1;
              d[i + 1][j + 1] = 0;
            }
            else
            {
              d[i][j] = 1;
              d[i][j + 1] = 0;
              d[i + 1][j] = 0;
              d[i + 1][j + 1] = 1;
            }
          }
        }
        else
        {
          if (d[i][j - 2] == 1 && d[i][j - 1] == 0 && d[i + 1][j - 1] == 1 && d[i + 1][j - 2] == 0)
          {
            d[i][j] = 0;
            d[i][j + 1] = 1;
            d[i + 1][j] = 1;
            d[i + 1][j + 1] = 0;
          }
          else
          {
            d[i][j] = 1;
            d[i][j + 1] = 0;
            d[i + 1][j] = 0;
            d[i + 1][j + 1] = 1;
          }
        }
        co1++;
      }
      co++;
    }
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cout << d[i][j] << ' ';
      }
      cout << '\n';
    }
  }

  return 0;
}