#pragma warning(disable:4996)
#include<stdio.h>
int main() {
	char n;
	int n1 = 0, n2 = 0;
	while (1) {
		scanf("%c",&n);
		if (n == 'd') {
			n1 = n1+1;
		}
		else if (n == 'r') {
			n2 += 1;
		}
		else if (n == '.')
			break;
		else
			continue; 
	}
	printf("do=%d\nre=%d", n1, n2);
	return 0;
}
