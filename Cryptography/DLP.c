#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "crypto.h"

unsigned long long DLP(unsigned long long val, unsigned long long p, unsigned long long g) {
	for (unsigned long long i = 1; i < p; i++) {
		if (val == fastpoweralgo_lowmem(p, g, i)){
			return i;
		}
	}
	return 0;
}
