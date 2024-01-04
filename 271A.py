y = int(input())
for i in range(1, 9000):
    z = str(y+i)
    if z[0] != z[1] and z[0] != z[2] and z[0] != z[3] and z[1] != z[2] and z[1] != z[3] and z[2] != z[3]:
        print(z)
        break