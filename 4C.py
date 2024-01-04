reg = {}
for i in range(int(input())):
    st = input()
    if st not in reg:
        reg[st] = 1
        print("OK")
    elif st in reg:
        print(st+str(reg[st]))
        reg[st] += 1