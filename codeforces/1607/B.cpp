#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        int d=b%4;
        if(d>=1) {
            if(a%2==0){
                if(d==1)a=a-b;
               else if(d==2){
                    a=a-(b-1);
                    a=a+b;
                }
                else if(d==3){
                    a=a-(b-2);
                    a=a+(b-1);
                    a=a+b;
                }
            }
            else {
                if(d==1){
                    a=a+b;
                }
                else if(d==2)
                {
                    a=a+(b-1);
                    a=a-b;
                }
                else if(d==3){
                    a=a+(b-2);
                    a=a-(b-1);
                    a=a-b;
                }
            }
            
        }
        cout<<a<<endl;
    }
     return 0;
}