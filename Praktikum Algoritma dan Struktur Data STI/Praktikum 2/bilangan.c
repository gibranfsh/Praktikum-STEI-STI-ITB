#include <stdio.h>

int main() {
	int j, N, M;
	int i;
	scanf("%d", &N);
	
	for (i = 1; i <= N; i++) {
		int sum = 0;
		scanf("%d", &M);
		for (j = 1; j <= M; j++) {
			if (j % 7 == 0) {
				sum+=j;
				}
			else {
				int jDup = j;
				int flag = 0;
				while ((jDup > 0) && (flag == 0)) {
					if (jDup % 10 == 7){
						flag = 1;
						sum += j;
						}
					jDup /= 10;				
					}
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}

