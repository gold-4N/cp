#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       int n,sum=1,sum1=2;
       vector<int>v,v1;
       cin>>n;
      v.push_back(1);
      v1.push_back(2);
       for (int i = 0;; i++)
       {
           if(sum==n||sum1==n)break;
           if(i%2==0){v.push_back(2);sum+=2;}
           else {v.push_back(1);sum++;}
           if(i%2==0){v1.push_back(1);sum1++;}
           else {v1.push_back(2);sum1+=2;}
       }
    if(sum1==n){for (int i = 0; i < v1.size(); i++)cout<<v1[i];cout<<endl;
    }
    else{
        for (int i = 0; i < v.size(); i++)cout<<v[i];cout<<endl;
    }
    
  //  cout<<sum <<" "<<sum1<<endl;
  }
    return 0;
}
