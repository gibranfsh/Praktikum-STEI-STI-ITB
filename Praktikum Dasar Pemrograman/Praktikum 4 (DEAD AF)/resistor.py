R1 = float(input())
R2 = float(input())
R3 = float(input())

pilihan = input()

while not((R1 > 0) and (R2 > 0) and (R3 > 0) and ((pilihan == 's') or (pilihan == 'S') or (pilihan == 'p') or (pilihan == 'P'))):
        print("Masukan salah")
        R1 = float(input())
        R2 = float(input())
        R3 = float(input())

        pilihan = input()

if pilihan == 's' or pilihan == 'S':
    RT = R1 + R2 + R3
    print('{:.2f}'.format(RT))
else: ###
    RT = (1/R1)+(1/R2)+(1/R3)
    print('{:.2f}'.format(1/RT))
    
