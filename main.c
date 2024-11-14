#include <stdio.h>

int factorial(n) {
	int f = 1;
	for (int i = 0; i < n; i++) {
		f *= i + 1;	
	};
	
	return f;
};

int combination(n1, n2) {
	int res = factorial(n1) / (factorial(n1 - n2) * factorial(n2));
	return res;
};

int main () {
	int x;
	puts("need input:");
	scanf("%d", &x);
	for (int i = 0; i < x; i++) {
		for (int b = 0; b < (x - i); b++) {
			printf("  ");	
		};
		
		for (int a = 0; a < (i + 1); a++) {
			printf("  %d ", combination(i, a));
		};
		
		printf("\n");
	};
	return 0;
};
