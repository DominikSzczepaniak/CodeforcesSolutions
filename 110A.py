w = input()
ans = 0
for i in range(0, len(w)):
    if w[i] == "4" or w[i] == "7":
        ans += 1
if ans == 4 or ans == 7:
    print("YES")   
else:
    print("NO")