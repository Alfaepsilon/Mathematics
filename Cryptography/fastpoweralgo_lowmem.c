#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

	int N, g, A = 0;
	printf("Type modulo: ");
	scanf_s("%d", &N);
	printf("Type base: ");
	scanf_s("%d", &g);
	printf("Type exponent: ");
	scanf_s("%d", &A);
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
