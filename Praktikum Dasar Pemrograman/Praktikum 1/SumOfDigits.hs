module SumOfDigits where

--Definisi dan Spesifikasi
sumOfDigits :: Int -> Int
    -- sumOfDigits n menghasilkan penjumlahan setiap bilangan tunggal yang membentuk n
    -- prekondisi n >= 0

--Realisasi
sumOfDigits n 
    |n >= 0 && n < 10 = n --Basis
    |n >= 10  = sumOfDigits (div n 10) + mod n 10 --Rekurens