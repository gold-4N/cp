#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a[16]={0,1,2,3,4,5,10,11,12,13,14,15,20,21,22,23};
    int b[16]={0,10,20,30,40,50,1,11,21,31,41,51,2,12,22,32};
   
    while (t--)
    {
        int sum=0,co=0;
        int h,m,x;
        scanf("%d:%d %d", &h,&m,&x);
        int h1=x/60;
        int m1=x%60;
        int h2=h;
        int m2=m;
        int k=1440/x+10;
       // cout<<k<<endl;
        while (1)
        {
            for (int i = 0; i < 16; i++)
            {
                if(a[i]==h&&b[i]==m){
                    sum++;
                    break;
                }
            }
           
            h=h+h1;
            m+=m1;
            if(m>59)
            {
                h++;
                m=m%60;
            }
            
           // if(h==4&&m==0)sum++;
          // if(h>23)co++;
           // if(co>=1&&(h>=h1||(h==h1&&m>=m1)))break;
            
            h=h%24;
            if(h==h2&&m==m2)break;
            //cout<<h<<' '<<m<<endl;
        }
         
        cout<<sum<<endl;
        
    }
    
    return 0;
}