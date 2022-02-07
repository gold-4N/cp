#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   while (n--)
    {
        int a,b;
        cin>>a>>b;
        if(a%2==0||b==1)
        {
            cout<<"YES"<<endl;          
                long sum=1;
                for (int j = 1; ; j++)
                {                   
                    if(j>b){
                        j=1;
                        cout<<endl;
                    }
                    cout<<sum<<" ";
                    sum+=2;
                    if(sum>a*b)break;
                }
                cout<<endl;
            sum=2;
            for (int j = 1; ; j++)
                {                   
                   if(sum>a*b){break;}
                    if(j>b){
                        j=1;
                        cout<<endl;
                    }
                    cout<<sum<<" ";
                    sum+=2;
                    if(sum>a*b){cout<<endl;break;}
                }
                
            
        }
        else cout<<"NO"<<endl;
    }
    
    return 0;
}