x = int(input())
k = 0
while x > 0:
    for i in range(5, 0, -1):
        if x - i >= 0:
            x = x - i
            k += 1
            break
print(k)