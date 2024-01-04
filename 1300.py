for i in range(int(input())):
    n = int(input())
    p = list(map(int, input().split()))
    p.sort()
    half = int(len(p) / 2)
    print(p[half] - p[half-1])