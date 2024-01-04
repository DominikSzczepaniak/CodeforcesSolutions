l = input()
vowels = ['a', 'A', 'o', 'O', 'Y','y','e','E','u','U','i','I']
st = ""
for i in range(len(l)):
    if(l[i]) in vowels:
        continue
    else:
        st += '.'
        if(l[i].isupper() == True):
            st += l[i].lower()
        else:
            st += l[i]
print(st)