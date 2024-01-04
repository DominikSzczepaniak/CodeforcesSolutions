from math import sqrt
a, b = map(int, input().split()) #coordinates of home
n = int(input()) #avaiable taxies in nearby
c = []
ans = 10000000
for i in range(n):
    x, y, v = map(int, input().split())
    square = (a-x)*(a-x) + (b-y)*(b-y)
    square = sqrt(square)
    time = square/v
    ans = min(ans, time)
print(ans)