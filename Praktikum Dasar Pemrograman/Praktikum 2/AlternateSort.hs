module AlternateSort where

-- Definisi dan Spesifikasi
-- Fungsi yang mengambil 2 list dengan elemen unik dan menaik, kemudian memberikan list berisi elemen yang dapat ditemukan pada kedua list

filterBawah :: [Int] -> Int -> [Int]
filterBawah list pembanding
  | null list = []
  | head list < pembanding = head list : filterBawah (tail list) pembanding
  | otherwise = filterBawah (tail list) pembanding

filterAtas :: [Int] -> Int -> [Int]
filterAtas list pembanding
  | null list = []
  | head list < pembanding = head list : filterAtas (tail list) pembanding
  | otherwise = filterAtas (tail list) pembanding


sort :: [Int] -> [Int]
sort [] = []
sort list =
  let tengah = head list
      bigger = filterAtas list tengah
      small = filterBawah list tengah
   in sort small ++ [tengah] ++ sort bigger


taketengah :: [Int] -> [Int]
taketengah list = init (tail list)


alternateSort :: [Int] -> [Int]
alternateSort [] = []
alternateSort [x] = [x]
alternateSort list =
  let sortedlist = sort list
   in [head sortedlist] ++ [last sortedlist] ++ alternateSort (taketengah sortedlist)

-- [1, 2, 3, 4, 5, 6]

-- [1] ++ [6] ++ alternateSort [2, 3, 4, 5]
