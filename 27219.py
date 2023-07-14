n = int(input())
v, i = n // 5, n % 5

for _ in range(v): print('V', end='')
for _ in range(i): print('I', end='')
