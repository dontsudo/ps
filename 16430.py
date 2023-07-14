A, B = map(int, input().split(" "))

def gcd(p, q):
    if (p < q): p, q = q, p
    if (q == 0): return p
    return gcd(p % q, q)

P, Q = B - A, B
GCD = gcd(P, Q)

P, Q = int(P / GCD), int(Q / GCD)

print(f"{P} {Q}")
