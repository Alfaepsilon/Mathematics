from fastpoweralgo_lowmem import fastpoweralgo_lowmem
def primitive_roots(p):
	count = 0
	prim_roots = []
	for i in range(2, p):
		for (int j = 0; j < p - 1; j++) {
			prim_roots[j] = fastpoweralgo_lowmem(p, i, j);
			if (prim_roots[j] == i) {
				count = count + 1;
			}
			if (count > 1) {
				count = 0;
				goto skip;
			}
		}
		count = 0;
		printf("%d is a primitive root \n", i);
		skip:
			continue;
	}
	return 0;
}