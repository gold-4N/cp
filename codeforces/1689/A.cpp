#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n,m,k;
    cin>>n>>m>>k;
    string s,s1;
    
    cin>>s>>s1;
    sort(s.begin(),s.end());
    sort(s1.begin(),s1.end());
    int i=0,j=0,a=0,b=0;
    for(;i<n&&j<m;)
    {
      if(s[i]<s1[j]&&a<k){
        a++;
        b=0;
        cout<<s[i];
        i++;
        }
        else if(s[i]>s1[j]&&b<k)
        {
        b++;
        a=0;
        cout<<s1[j];
        j++;
        }
        else if(a==k){
          cout<<s1[j];
          j++;
          a=0;b++;
        }
        else if(b==k)
        {
          cout<<s[i];
          i++;
          a++;b=0;
        }
        else 
        {
          cout<<s[i]<<s1[j];
          i++;j++;
        }
    }
    cout<<endl;
  }
  return 0;
}
