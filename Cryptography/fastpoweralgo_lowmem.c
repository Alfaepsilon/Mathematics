#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <crypto.h>

int fastpoweralgo_lowmem() {
	int N, g, A = 0;
	printf("Type modulo: ");
	scanf("%d", &N);
	printf("Type base: ");
	scanf("%d", &g);
	printf("Type exponent: ");
	scanf("%d", &A);
	int a = g;
	int b = 1;
	while (A > 0) {
		if (A % 2 == 1) {
			b = (b * a) % N;
		}
		a = (a * a) % N;
		A = A / 2;

	}
	printf("%d", b);
}
