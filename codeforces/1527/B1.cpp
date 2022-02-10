#include <bits/stdc++.h>
using namespace std;
bool isple(string s)
{
    string P = s;
 
    reverse(P.begin(), P.end());
    if (s == P) {
       
        return true;
    }
    else {
        return false;
    }
}
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
       int n,a=0,b=0,c=0;
       cin>>n;
       string s;
       cin>>s;
       int ar[n];
       for (int i = 0; i < n; i++)
       {
           if(s[i]=='0'){ar[c++]=i;}
       }
     /*  int co=0,rev=0;
       while(c)
       { 
           if(co%2==0){
           if(isple(s)||rev==1){
               s[ar[--c]]='1';
               a++;
               rev=0;
           }
            else if(rev==0) {rev=1;}
           co++;
       }
       else {
           if(isple(s)||rev==1){ 
               s[ar[--c]='1'];
               b++;
               rev=0;
           }
           else if(rev==0){rev=1;}
           co++;
       }
       //cout<<s<<" ";
       }*/
       if(c==1||c%2==0)cout<<"BOB"<<endl;
       else cout<<"ALICE"<<endl;
       //else  cout<<"DRAW"<<endl;        
   }
   
    return 0;
}