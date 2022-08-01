#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, h, m;
        bool ok = false;
        cin >> n >> h >> m;
        int a[n][2];
        int ansh, ansm;
        int ah = 100, am = 100;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i][0] >> a[i][1];
            if (a[i][0] == h && a[i][1] == m)
                ok = true;
            
                if (a[i][0] - h > 0)
                {
                    ansh = a[i][0] - h-1;
                    if (60 - m +a[i][1] >= 60)
                    {
                        ansh++;
                        ansm = (60 - m +a[i][1]) % 60;
                    }
                    else
                        ansm = 60 - m +a[i][1];
                }
                else
                {
                    if(a[i][0] - h == 0&&a[i][1]>m)
                    {
                        ansh=0;
                        ansm=a[i][1]-m;
                    }
                    else{
                    ansh = 24 - h + a[i][0]-1;
                    //cout<<24 - h + a[i][0]-1<<endl;
                    if (60 - m +a[i][1] >= 60)
                    {
                        ansh++;
                        ansm = (60 - m +a[i][1]) % 60;
                        //cout<<60-m+a[i][1]<<endl;
                    }
                    else
                        ansm = 60 - m +a[i][1];
                                           
                }
                }
            if(ah>=ansh){
                
               // cout<<ah<<endl;
                if(ah==ansh)am=min(am,ansm);
                else 
                am=ansm;
                ah =ansh;
              
            }
        }
        if (ok)
            cout << "0 0\n";
        else
            cout << ah << " " << am << endl;
    }

    return 0;
}
