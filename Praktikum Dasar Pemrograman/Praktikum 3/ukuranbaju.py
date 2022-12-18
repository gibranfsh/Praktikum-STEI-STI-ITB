t = int(input())
b = int(input())

if t <= 150:
    print(1)

elif t > 170 and 60 < b <= 80:
    print(3)

elif 150 < t <= 170:
    if b <= 80:
        print(2)
    else:
        print(3)
else:
    print(4)