#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int s[t];
    int a=0,b=0;
    int sum1=0,sum2=0;
    for(int i=0;i<t;i++)
    {
        cin>>s[i];
    }
    for(int i=0,j=t-1;;)
    {
        if(a+b==t)break;
        else if(t-a-b>1){
            if(sum1==sum2){
                sum1+=s[i];
                sum2+=s[j];
                a++;b++;
                i++;j--;
            }
            else if(sum1>sum2){
                sum2+=s[j];b++;
                j--;
            }
            else {
                sum1+=s[i];
                i++;
                a++;
            }
        }
        else {
            if(sum1==sum2||sum1<sum2)a++;
            else if(sum1>sum2)b++;
        }
    }
    cout<<a<<" "<<b<<endl;
    return 0;
}
