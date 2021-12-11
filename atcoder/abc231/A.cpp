#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a;
    cin>>a;
  	int b=a;
    if(b%100==0)printf("%.0lf", a/100);
    else printf("%.2lf", a/100);
    return 0;
}
