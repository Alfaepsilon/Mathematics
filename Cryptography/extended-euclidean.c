#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <crypto.h>

int exeucalgo() {
	int a;
	int b;
	int u = 1;
	int x = 0;
	int s;
	int t;
	int q;
	printf("Type a number: \n");
	scanf("%d", &a);
	int g = a;
	printf("Type another number: \n");
	scanf("%d", &b);
	if (b == 0) {
		printf("%d, %d, %d", g, u, 0);
		return 0;
	}
	int y = b;
	while (y > 0) {
		t = g % y;
		q = g / y;
		s = u - (q * x);
		u = x;
		g = y;
		x = s;
		y = t;
	}
	int v = (g - a * u) / b;
	while (u < 0) {
		u = u + b/g;
		v = v - a/g;
	}
	printf("%d, %d, %d",  g, u, v);
	return 0;
}
