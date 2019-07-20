def FungsiA(a):
    x = [a[0:3], a[3:7], a[7:]]
    y = [a[0:7], a[7:]]
    print(x)
    print(y)
    
def FungsiB(b):
    x = [b[0:3], b[3:7], b[7:]]
    y = [b[0:7], b[7:]]
    z = [b[0:10], b[10:]]
    print(x)
    print(y)
    print(z)

teks = input("Type Here: ")
if (teks=="programit"):
    FungsiA(teks)
elif (teks=="programmerit"):
    FungsiB(teks)
