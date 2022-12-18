module ListIndex where
-- DEFINISI DAN SPESIFIKASI LIST
{- type List of Char: [ ] atau [e o List] atau [List o e]
   Definisi type List of Char
   Basis: List of Char kosong adalah list of Char
   Rekurens: 
   List tidak kosong dibuat dengan menambahkan sebuah elemen bertype Char di awal 
   sebuah list atau
   dibuat dengan menambahkan sebuah elemen bertype Char di akhir sebuah list -}

-- DEFINISI DAN SPESIFIKASI KONSTRUKTOR

konsDot :: [Char] -> Char -> [Char]
{- konsDot(lc,cc) menghasilkan sebuah list of character dari lc (list of 
   character) dan e (sebuah character), dengan e sebagai elemen terakhir: 
   lc o e -> lc' -}
-- REALISASI
konsDot lc e = lc ++ [e]

-- DEFINISI DAN SPESIFIKASI SELEKTOR
-- head :: [Char] -> Char
-- head l menghasilkan elemen pertama list l, l tidak kosong

-- tail :: [Char] -> [Char]
-- tail l menghasilkan list tanpa elemen pertama list l, l tidak kosong

-- last :: [Char] -> Char
-- last l  menghasilkan elemen terakhir list l, l tidak kosong

-- init :: [Char] -> [Char]
-- init(l) menghasilkan list tanpa elemen terakhir list l, l tidak kosong

-- DEFINISI DAN SPESIFIKASI PREDIKAT
isEmpty :: [Int] -> Bool
-- isEmpty l true jika list of character l kosong
-- REALISASI
isEmpty l = null l

isOneElmt :: [Int] -> Bool
-- isOneElmt l true jika list of character l hanya mempunyai satu elemen
-- REALISASI
isOneElmt l = (length l) == 1 

--Definisi dan Spesifikasi
listIndex :: [Int] -> (Int -> Char) -> [Char]
k :: Int -> Char
konso :: Char -> [Char] -> [Char]

konso e lc = [e] ++ lc

k n
    | n >= 80 && n <= 100 = 'A'
    | n < 80 && n >= 70 = 'B'
    | n < 70 && n >= 65 = 'C'
    | n < 65 && n >= 55 = 'D'
    | n < 55 && n >= 0 = 'E'

listIndex l f
    |isEmpty l = []
    |otherwise = konso (f (head l)) (listIndex (tail l) f)
