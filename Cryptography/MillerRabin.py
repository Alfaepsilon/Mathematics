def MillerRabin(n, a):
    if n % 2 == 0:
        return 1
    if gcd(a, n) != 1 and gcd(a, n) != n:
        return 1
    q = n - 1
    k = 0
    while q % 2 == 0:
        q = q / 2
        k = k + 1
    a = power_mod(a, q, n)
    if Mod(a, n) == 1:
        return 0
    for i in range(0, k - 1):
        if Mod(a, n) == n - 1:
            return 0
        a = power_mod(a, 2, n)
    return 1
