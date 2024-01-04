n, t = map(int, input().split())
for i in range(pow(10, n-1), pow(10, n)):
    if i%t == 0:
        print(i)
        exit(0)
        break
print(-1)