for i in range(int(input())):
    n = int(input())
    i = 2
    while i*i <= n and n%i>0:
        i+= 1
    if i*i<n+1:
        print(n//i, n-n//i)
    else:
        print(1, n-1)