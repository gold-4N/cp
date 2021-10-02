#include <bits/stdc++.h>

using namespace std;

int main()
{
 
    string s, s1;
    cin >> s >> s1;
    int cnt=0,flg=0;
 
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i]!=s1[i])
        {
            int pos = i;
            swap(s[pos],s[pos+1]);
            break;
        }
    }
    if(s==s1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
 
 

    return 0;


}

    