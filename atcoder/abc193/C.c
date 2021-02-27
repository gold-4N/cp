#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define M 100001

int main (void){
    long long int n, sum = 0,t;
    int m[M];
    scanf("%lld", &n);
    sum = n;
    for(int i = 1; i<M; i++){
        m[i] = 0;
    }
    for(long long int i = 2; i * i <=n; i++){
        if(t == 1 || m[i] == 1) continue;

        t = i;

        while(t <= n){
            t *= i;
            if(t > n){
                break;
            }
            if(t < M)
                m[t] = 1;
            sum--;
        }
    }
    printf("%lld\n",sum);
    return 0;
}