#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  set<char>v;
  while (t--)
  {
    string s;
    cin>>s;
   //s+='0';
    int sum=0;
    for (int i = 0; i < s.size(); i++)
    {
     // if(i+1<s.size()&& s[i]==s[i+1])i++;
      //else 
      {
       // sum++;
        //if(s[i]==s[i+2]&&i+2<s.size()){sum++;i+=2;}
        //else 
        {
          if(!v.empty()){
            if(v.find(s[i])!=v.end()){
              sum=sum+(v.size()-1);
              v.clear();
            }
            else v.insert(s[i]);
          }
         else v.insert(s[i]);
        }
       // cout<<v.size()<<" ";
      }
    }
    cout<<sum+v.size()<<endl;
    v.clear();
  }
    
  return 0;
}
