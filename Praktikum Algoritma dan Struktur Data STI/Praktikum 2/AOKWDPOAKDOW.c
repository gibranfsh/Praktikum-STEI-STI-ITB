#include <stdio.h>

int main() {
	int j, N, M;
	int i;
	scanf("%d", &N);
	
	for (i = 1; i <= N; i++) {
		int sum = 0;
		scanf("%d", &M);
		for (j = 1; j <= M; j++) {
			if ((j % 7 == 0) || (j % 10 == 7) || (j/10 == 7)) {
				sum+=j;
				}
			}
		printf("%d\n", sum);
		}
	}
