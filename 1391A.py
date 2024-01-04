t = int(input())
for i in range(t):
    n = int(input())
    c = []
    for j in range(1, n+1):
        c.append(j)
    print(' '.join(map(str, c)))