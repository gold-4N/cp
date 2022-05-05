#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    string s,s1;
    cin>>s;
    s1=s;
    sort(s1.begin(),s1.end());
    if(!binary_search(s1.begin(),s1.end(),'0')&&!binary_search(s1.begin(),s1.end(),'1'))cout<<s.size()<<endl;
    else if(!binary_search(s1.begin(),s1.end(),'0')){
      int se;
      for (int i = s.size()-1; i >= 0; i--)
      {
        if(s[i]=='1'){se=i;break;}
      }
      cout<<s.size()-se<<endl;
    }
    else{
      int zero,se;
      for (int i = 0; i<s.size(); i++)
      {
        if(s[i]=='0'){zero=i;break;}
      }
      if(!binary_search(s1.begin(),s1.end(),'1'))cout<<zero+1<<endl;
      else{
        for (int i = zero-1; i >=0; i--)
        {
          if(s[i]=='1'){se=i;break;}
        }
        cout<<zero-se+1<<endl;
        
      }
      
    }
    
  }

    
  return 0;
}
