#include <stdio.h>
#include <math.h>

int main(void){
    long long k, a, b, i=1, A=0, B=0;
    scanf("%lld", &k);
    scanf("%lld %lld", &a, &b);
    while(a>=1){
        A += (a % 10) * i;
        a = a / 10;
        i = i * k;
    }

    i = 1;

    while(b>=1){
        B += (b % 10) * i;
        b = b / 10;
        i = i * k;
    }
    printf("%lld\n", (A*B));
    return 0;
}
