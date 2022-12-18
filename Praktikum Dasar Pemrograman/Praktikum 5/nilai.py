nilai = int(input())

if nilai == -9999:
    print("Data nilai kosong")

else:
    mhswluluslds40 = 0
    mhswltdkluluskd40 = 0
    jmlhmhsw = 0
    sum = 0
    while nilai != -9999:
        if 0 <= nilai <= 100:
            sum += nilai
            jmlhmhsw += 1
            if  nilai >= 40:
                mhswluluslds40 += 1
            elif nilai < 40:
                mhswltdkluluskd40 += 1
        nilai = int(input())

    if jmlhmhsw ==  0:
        print("0")
    else:
        print(jmlhmhsw)
        print(mhswluluslds40)
        print(mhswltdkluluskd40)
        print("%.2f"%(sum/jmlhmhsw))