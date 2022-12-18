module KonversiSuhu where

--Definisi dan Spesifikasi
konversiSuhu :: Float -> Char -> Float
    --konversiSuhu t k mengkonversi suhu dari satu satuan Celcius ke satuan suhu yang lain, yaitu Fahrenheit, Reamur, atau Kelvin.
    
--Realisasi
konversiSuhu t k
    | k == 'R' = 4/5 * t
    | k == 'F' = 9/5 * t + 32
    | k == 'K' = 273.15 + t