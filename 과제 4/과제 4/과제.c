#pragma warning(disable:4996)
#include<stdio.h>
int main() {
	int N;
	int i, j, k = 1;
	scanf("%d", &N);
	for (i = 1; i <= N; i++) {
		for (j = 1;j <= i;j++) {
			if (k == 10) k = 0;
			printf(" %d", k++);
		}


		printf("\n");
	}

	return 0;
}
//  
//   
// 