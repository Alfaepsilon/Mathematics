#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "crypto.h"

int shanks(int val, int p, int g) {
	int inverse = exeucalgo(g, p, 1);
	int N = DLP(1, p, g);
	int n = 1 + floor(sqrt(N));
	int l1[n];
	for(int i = 0; i < n + 1; i++){
		l1[i] = fastpoweralgo_lowmem(p, g, i);
	}
	for(int i = 0; i < n + 1; i++){
		for(int j = 0; j < n + 1; j++){
			if((val * fastpoweralgo_lowmem(p, inverse, i * n) % p) == l1[j]){
				return j + i*n;
			}
		}
	}
	return 0;
}
