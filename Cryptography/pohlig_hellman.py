from fastpoweralgo_lowmem import fastpoweralgo_lowmem
from shanks import shanks
from chinese import chinese
def pohlig(val, factors, g, p, N):
    y = []
    mod = []
    for factor in factors:
        order_gi = N
        qe = 1
        while order_gi % factor == 0:
            order_gi = order_gi // factor
            qe = qe * factor
        gi = fastpoweralgo_lowmem(p, g, order_gi)
        hi = fastpoweralgo_lowmem(p, val, order_gi)
        yi = shanks(hi, p, gi, qe)
        y.append(yi)
        mod.append(qe)
    return chinese(y, mod)