#NIM/Nama  : 16521125/Gibran Fasha Ghazanfar
#Tanggal    : 3 Oktober 2021
#Deskripsi : Program yang dapat memeriksa apakah B merupakan anagram dari A. 

#Kamus :
# N, Y, tempA, tempB, counter = int
# A , B = array of int

#Algoritma :
N = int(input("Masukkan banyaknya elemen A: "))
A = [0 for i in range(N)]

if 0 < N <= 10:
    for i in range(N):
        A[i] = int(input(f"Masukkan elemen A ke-{i+1}: "))
        
    Y = int(input("Masukkan banyaknya elemen B: "))
    if 0 < Y <= 10:
        B = [0 for i in range(Y)]
        for i in range(Y):
            B[i] = int(input(f"Masukkan elemen B ke-{i+1}: "))

        tempA = 0
        tempB = 0
        for i in range(N):    
            for j in range(i+1, N):    
                if(A[i] > A[j]):    
                    tempA = A[i];    
                    A[i] = A[j];    
                    A[j] = tempA;    

        for i in range(0, Y):    
            for j in range(i+1, Y):    
                if(B[i] > B[j]):    
                    tempB = B[i];    
                    B[i] = B[j];    
                    B[j] = tempB;   
                    
        counter = 0
        if N == Y:
            for i in range(N):
                for j in range(Y):
                    if A[i] == B[j]:
                        counter += 1
            if counter == N:
                print("B adalah anagram dari A")
            else:
                print("B bukan anagram dari A")
        else:
            print("B bukan anagram dari A")
    else:
        print("Jumlah bilangan harus lebih dari 0 dan maksimal berjumlah 10!")
else:
    print("Jumlah bilangan harus lebih dari 0 dan maksimal berjumlah 10!")