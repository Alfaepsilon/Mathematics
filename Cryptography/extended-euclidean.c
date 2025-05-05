#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "crypto.h"

unsigned long long exeucalgo(unsigned long long a, unsigned long long b, unsigned long long inverse) {
	unsigned long long u = 1;
	unsigned long long x = 0;
	unsigned long long s;
	unsigned long long t;
	unsigned long long q;
	unsigned long long g = a;
	if (b == 0) {
		printf("%d, %d, %d", g, u, 0);
		return 0;
	}
	unsigned long long y = b;
	while (y > 0) {
		t = g % y;
		q = g / y;
		s = u - (q * x);
		u = x;
		g = y;
		x = s;
		y = t;
	}
	unsigned long long v = (g - a * u) / b;
	while (u < 0) {
		u = u + b/g;
		v = v - a/g;
	}
	if(inverse = 1){
		return u;
	}
	//prunsigned long longf("%d, %d, %d",  g, u, v);
	return 0;
}
