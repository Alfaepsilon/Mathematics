#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a;
	int b;
	printf("Type a number: \n");
	scanf_s("%d", &a);
	printf("Type another number: \n");
	scanf_s("%d", &b);
	while (a != b) {
		if (a > b) {
			a = a - b;
		}
		else {
			b = b - a;
		}
	}
	printf("%d", a);
}
