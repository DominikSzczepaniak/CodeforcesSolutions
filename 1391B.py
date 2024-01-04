t = int(input())
for i in range(t):
    n, m = map(int, input().split())
    ans = 0
    for j in range(n):
        row = input()
        if row[-1] == "R":
            ans+= 1
        for k in row:
            if k == "D" and n-j == 1:
                ans+= 1
    print(ans)