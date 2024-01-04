a, b = input().split()
k = int(b)
n = int(a)
while k > 0:
    if n%10==0:
        n = n/10
        k -= 1
    else:
        n -= 1
        k -= 1
print(int(n))