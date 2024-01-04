n = int(input())
ans = 0
for i in range(n):
    p, q = input().split()
    if int(q) - int(p) >= 2:
        ans += 1
print(ans)   