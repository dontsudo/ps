n = int(input())

def parse(s: str) -> float:
    if s.startswith('.'):
        s = '0' + s

    return float(s)

for _ in range(n):
    d, f, p = map(parse, input().split())
    amount = d * f * p

    print("${:.2f}".format(amount))


