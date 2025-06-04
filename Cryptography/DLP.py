from fastpoweralgo_lowmem import fastpoweralgo_lowmem
from order import order
from factorize import factorize
from pohlig_hellman import pohlig
from shanks import shanks
def DLP(val, p, g):
	N = order(g, p - 1)
	factors = factorize(N)
	if(len(factors) != 1):
		print(pohlig(val, factors, g, p, N))
	else:
		print(shanks(val, p, g, N))