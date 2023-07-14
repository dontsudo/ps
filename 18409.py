_, s = input(), input()

count = 0
vowels = set(['a', 'e', 'i', 'o', 'u'])

for char in s:
    if char in vowels:
        count += 1

print(count)

