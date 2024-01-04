f = input()
count = 0
count2 = 0
for i in f:
    if i.isupper():
        count += 1
    else:
        count2 += 1

if count > count2:
    print(f.upper())
elif count < count2:
    print(f.lower())
elif count == count2:
    print(f.lower())