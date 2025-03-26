#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "crypto.h"

int fastpoweralgo_lowmem(int modulo, int base, int exponent) {
	int a = base;
	int b = 1;
	while (exponent > 0) {
		if (exponent % 2 == 1) {
			b = (b * a) % modulo;
		}
		a = (a * a) % modulo;
		exponent = exponent / 2;

	}
	return b;
}
