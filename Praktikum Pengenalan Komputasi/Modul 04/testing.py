import pandas as pd
input_data = {}
input_data ["A"] = [0 for i in range(5)]
input_data ["B"] = [0 for i in range(5)]
for i in range(5):
    input_data ["A"][i] = input("Nilai A untuk data ke-" + str(i + 1) + ": ")
for i in range(5):
    input_data ["B"][i] = input("Nilai B untuk data ke-" + str(i + 1) + ": ")
df = pd. DataFrame (data= input_data )
print(df)