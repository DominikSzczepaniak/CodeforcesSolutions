k, n, w = map(int, input().split())
cost = 0
for i in range(w):
    cost = cost + k*(i+1)
if cost - n < 0:
    cost = 0
else:
    cost = cost - n
print(cost)