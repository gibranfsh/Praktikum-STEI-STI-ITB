module SumKelipatanX where

--Definisi dan Spesifikasi
sumKelipatanX :: Int -> Int -> Int -> Int
{- sumKelipatanX(a,b,x) menjumlahan semua bilangan kelipatan x di range [a, b] -}

--Realisasi
sumKelipatanX m n x
    |mod m x /= 0 && m <= n = sumKelipatanX (m+1) n x
    |m > n = 0
    |mod m x == 0 && m <= n = m + sumKelipatanX (m+1) n x

--Aplikasi
--sumKelipatanX 1 10 2