#from sympy import primefactors
from factorize import factorize
from fastpoweralgo_lowmem import fastpoweralgo_lowmem
def order(g, p):
    factors = factorize(p)
    modulo = p + 1
    for factor in factors:
        while fastpoweralgo_lowmem(modulo, g, p // factor) == 1:
            p = p // factor
    order = p
    print(order)
    return order