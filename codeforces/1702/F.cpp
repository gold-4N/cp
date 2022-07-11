#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n,d,d1;
    cin>>n;
    int a[n],b[n];
    bool ok=false;
    priority_queue<int>q,q1;
    for (int i = 0; i < n; i++){cin>>a[i];q.push(a[i]);}
    for (int i = 0; i < n; i++){cin>>b[i];q1.push(b[i]);}
    while (!q1.empty())
    {
      d=q.top();
      d1=q1.top();
      
      if(d<d1)
      {
       // q.pop();
        q1.pop();
        q1.push(d1/2);
        //q.push(d);
      }
      else if(d>d1)
      {
        if(d%2==1){break;}
        q.pop();
        q.push(d/2);
      }
      else {
        q.pop();
        q1.pop();
      }
    }
    if(q1.empty())cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }

  return 0;
}