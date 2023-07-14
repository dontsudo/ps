while True:
    n = int(input())
    if n == 0: 
        break

    acc = 0
    for i in range(1, n + 1):
        acc += i

    print(acc)
