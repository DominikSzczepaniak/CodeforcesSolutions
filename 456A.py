price = {}
t = int(input())
for i in range(t):
    a, b = map(int, input().split())
    price[a]= b
tab = {k: v for k, v in sorted(price.items(), key=lambda item: item[0])}
for key in tab:
    try:
        if tab.get(key) > tab.get(key+1):
            if key < (key+1):
                print("Happy Alex")
                break
        elif tab.get(key) <= tab.get(key+1):
            if key > (key+1):
                print("Happy Alex")
                break
    except:
        print("Poor Alex")