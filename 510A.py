n, k = map(int, input().split())
runda = 0
for i in range(n):
    if i%2==0:
        print("#"*k)
    else:
        if runda % 2 == 0:
            print("."*(k-1) + "#")
            runda += 1
        elif runda % 2 == 1:
            print("#" + "." * (k-1))
            runda+=1