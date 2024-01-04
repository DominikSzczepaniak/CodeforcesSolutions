a = int(input())
x = []
x = list(map(int, input().split()))
ans = 0
cookies = 0
for i in x:
    cookies += i
for i in x:
    if (a>1):
        if (cookies % 2 == 0):
            if (i%2==0):
                ans += 1       
        elif (cookies % 2 == 1):
            if (i%2==1):
                ans+=1
    else:
        ans = 1
print(ans)