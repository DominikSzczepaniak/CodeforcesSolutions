t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    c = min(a)
    d = min(b)
    ans = 0
    for j in range(n):
        ans += max(a[j] - c, b[j] - d)
    print(ans)