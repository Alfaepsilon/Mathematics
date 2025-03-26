#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <crypto.h>

int primitive_roots() {
	int p;
	printf("Type modulo, needs to be a prime: ");
	scanf("%d", &p);
    unsigned long long tmp = 0;
	int count = 0;
	int* prim_roots = malloc(sizeof(int) * p);
	for (int i = 2; i < p; i++) {
		for (int j = 0; j < p - 1; j++) {
            tmp = fastpoweralgo_lowmem();
			prim_roots[j] = tmp % p;
            printf("%d \n", prim_roots[j]);
		}
        printf("Done for %d \n", i);
		for (int h = 1; h < p; h++) {
			for (int k = 0; k < p - 1; k++) {
				if (prim_roots[k] == h) {
					count = count + 1;
				}
				if (count > 1) {
					count = 0;
					goto skip;
				}
			}
			count = 0;
		}
		//printf("%d is a primitive root \n", i);
		skip:
			continue;
	}
	return 0;
}
