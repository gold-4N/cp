#include<bits/stdc++.h>
using namespace std;
int c=0;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,a;
        cin>>n;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            cin>>a;
            v.push_back(a);
        }
        int minElementIndex = std::min_element(v.begin(),v.end()) - v.begin();
        int maxElementIndex = std::max_element(v.begin(),v.end()) - v.begin();
        minElementIndex++;
        maxElementIndex++;
        cout<<minElementIndex<<" "<<maxElementIndex<<endl;
        }
    
    return 0;
}