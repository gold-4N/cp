#include<bits/stdc++.h>

using namespace std;

int main() {
   char a[100],b[100];
   scanf("%s %s",a,b);
   int l=min(strlen(a),strlen(b));
   int l1=strlen(a);
   int l2=strlen(b);
   int c=0;
   for(int i=0;i<l;i++)
   {
       l1--;
       l2--;
       if(((a[l1]-'0')+(b[l2]-'0'))>9){
           cout<<"Hard"<<endl;
            c=1;
           break;
       }
   }
   if(c==0)cout<<"Easy"<<endl;
    return 0;
}

