import math
def BubbleSort(tab):
    n = len(tab)
    for i in range(n - 1):
        for j in range(0, n - i - 1):
            if tab[j] > tab[j + 1]:
                tab[j], tab[j + 1] = tab[j + 1], tab[j]
t = int(input())
for i in range(1, t + 1):
    l = int(input())
    a = list(map(int, input().split()))
    j = 0
    b = []
    BubbleSort(a)
    for j in range(0, len(a)):
        try:
            if abs(a[j] - a[j + 1]) <= 1:
                if a[j] < a[j + 1]:
                    b.append(a[j])
                    j += 1
                elif a[j] > a[j + 1]:
                    b.append(a[j + 1])
                    j += 1
                else:
                    b.append(a[j + 1])
                    j += 1
        except:
            pass

    if len(a) - len(b) == 1:
        print("YES")
    else:
        print("NO")