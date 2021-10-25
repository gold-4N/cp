#include<bits/stdc++.h>

using namespace std;

int main() {
    int T, a, b, c;
    scanf("%d", &T);
    for(int t = 0; t < T; t++){
        scanf("%d %d %d", &a, &b, &c);
        printf("%d\n", (a + c) % 2);
    }
}