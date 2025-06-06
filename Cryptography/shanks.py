from math import ceil, sqrt
from extended_euclidean import exeucalgo
from fastpoweralgo_lowmem import fastpoweralgo_lowmem
def shanks(val, p, g, N):
	inverse = exeucalgo(g, p, 1)
	n = ceil(sqrt(N))
	l1 = {fastpoweralgo_lowmem(p, g, i): i for i in range(n)}
	for i in range(n):
		j = (val * fastpoweralgo_lowmem(p, inverse, i * n)) % p
		if(j in l1):
			return l1[j] + i*n