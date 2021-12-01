#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, a1, b, b1;
        cin >> a >>a1 >> b >> b1;
        int l1 = log10(a) + 1;
        int l2 = log10(b) + 1;
       // cout<<" "<<l1<<" "<<l2<<endl;
        if (l1>l2)
        {
            while (b1--)
            {
                b *= 10;
                l2++;
                if (l1 == l2)
                    break;
            }
            if (a > b)
            {
                if (b1 > a1)
                    cout << "<" << endl;
                else
                {
                    cout << ">" << endl;
                }
            }
            else if (b > a)
            {
                if (b1 < a1)
                    cout << ">" << endl;
                else
                {
                    cout << "<" << endl;
                }
            }
            else
            {
                if (a1 > b1)
                    cout << ">" << endl;
                else if (b1 > a1)
                    cout << "<" << endl;
                else
                    cout << "=" << endl;
            }
        }
        else if (l2 > l1)
        {
            while (a1--)
            {
                a *= 10;
                l1++;
                if (l1 == l2)
                    break;
            }
            if (a > b)
            {
                if (b1 > a1)
                    cout << "<" << endl;
                else
                {
                    cout << ">" << endl;
                }
            }
            else if (b > a)
            {
                if (b1 < a1)
                    cout << ">" << endl;
                else
                {
                    cout << "<" << endl;
                }
            }
            else
            {
                if (a1 > b1)
                    cout << ">" << endl;
                else if (b1 > a1)
                    cout << "<" << endl;
                else
                    cout << "=" << endl;
            }
        }
        else {
            if(a>b){
                if(b1>a1)cout<<"<"<<endl;
                else cout<<">"<<endl;
            }
            else if(b>a){
                if(b1<a1)cout<<">"<<endl;
                else cout<<"<"<<endl;
            }
            else {
                if(a1>b1)cout<<">"<<endl;
                else if(b1>a1)cout<<"<"<<endl;
                else cout<<"="<<endl;
            }
        }
      //  cout<<" "<<l1<<" "<<l2<<endl;
      //  cout<<" "<<a<<" "<<b<<endl;
        
    }
    return 0;
}
