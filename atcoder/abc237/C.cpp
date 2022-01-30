#include <bits/stdc++.h>

using namespace std;
bool isPalindrome(string str, int h)
{
    int l = 0;
 
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
           
            return false;
        }
    }
    return true;
}

int main()
{
  string a;
  cin>>a;
  int c=0,n=a.size()-1;
  if(isPalindrome(a,n))cout<<"Yes"<<endl;
 else { 
   for (int i = a.size()-1; i>=0; i--)
  {
    if(a[i]=='a')
    {
      n--;
    }
    else break;
  }
  for (int i = 0; i<a.size(); i++)
  {
    if(a[i]=='a')
    {
      n++;
    }
    else break;
  }
  if(isPalindrome(a,n))cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
 }
  return 0;
}