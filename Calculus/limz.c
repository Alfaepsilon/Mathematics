#include <stdio.h>
#include <math.h>

#define lim(x) (x * sin(1/x))

//Calculates limit by, if limit is 0, inserting (j)^n into the limit-function where 0 < j < 1 and n is the current iteration and, if limit is k != 0, 
// inserting k ^ (1 + (j)^n) where 0 < j < 1 and n is the current iteration. Should for left and right limits be able to change sign of j. Prob will get weird output for some functions where limits are infinity.
int main() {
	int limit, iterations, i = 0;
	float j = 0.1;
	scanf_s("%d", &limit);
	scanf_s("%d", &iterations);
	if (limit == 0) {
		while (i <= iterations) {
			printf("%10f\n", lim(j));
			j = j * 0.1;
			i = i + 1;
		}
	}
	else {
		while (i <= iterations) {
			printf("%10f\n", lim(pow(limit, 1 + j)));
			j = j * 0.1;
			i = i + 1;
		}
	}
	return 0;
}
