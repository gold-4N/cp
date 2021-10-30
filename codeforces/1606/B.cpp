#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
            long long i=0,so=1;
            cin>>a>>b; 
            a--;
            while (1)
               {
               
                so = so*2;
                if(so/2>b||a<=0){
                    break;
                } 
                else {
                   
                    a=a-so/2;
                    i++;
                }      
            }
            //if(i==1)i--;
            //cout<<i<<" "<<a<<" ";
            if(a<=0)cout<<i<<endl;
            else if(a%b==0) cout<<a/b+i<<endl;
             else cout<<a/b+i+1<<endl;
        
        

    }
}