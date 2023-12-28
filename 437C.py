n, m = map(int, input().split())
tablica = list(map(int, input().split()))
wynik = 0
for i in range(m):
    a, b = map(int, input().split())
    wynik += min(tablica[a-1], tablica[b-1])
print(wynik)