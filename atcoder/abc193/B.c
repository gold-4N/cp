#include <stdio.h>
 
int main(void){
	int N, i, price=1e9, temp=-1;
	scanf("%d", &N);
	int A[N+1], P[N+1], X[N+1];
	for(i=1; i<=N; i++)
		scanf("%d %d %d", &A[i], &P[i], &X[i]);
	
	for(i=1; i<N+1; i++){
		if(A[i]<X[i])
				temp=P[i];
	}
	if(temp>-1){
		for(i=1; i<N+1; i++){
			if(A[i]<X[i]){
				if(P[i]<price)
					price=P[i];
			}
		}
		printf("%d", price);
	}else
		printf("-1");
	
	return 0;
}