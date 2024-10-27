#include <stdio.h>
#include <math.h>

#define f(x) (pow(x, 3) - cos(4*x))

int main() {
	float a = 0, b = 0, c = 0, err = 0.000001, error = 0;
	scanf_s("%f", &a);
	scanf_s("%f", &b);

	while (f(a) * f(b) > 0) {
		printf("Guessed values does not have opposite signs, try again");
		scanf_s("%f", &a);
		scanf_s("%f", &b);
	}
	if (f(a) == 0 || f(b) == 0) {
		printf("The root is %f", f(a) == 0 ? a : b);
	}
	error = (a - b) / 2;
	c = (a + b) / 2;
	printf("a: %f, b: %f, c: %f\n", a, b, c);
	while (abs(error) >= err) {
		if (f(c) == 0) {
			break;
		}
		if (f(a) * f(c) > 0) {
			a = c;
		}
		else {
			b = c;
		}
		c = (a + b) / 2;
		error = (a - b) / 2;
		printf("a: %f\t b: %f\t c: %f\n", a, b, c, f(c));
	}
	printf("Acceptable root is: %f", c);
	return 0;
}
