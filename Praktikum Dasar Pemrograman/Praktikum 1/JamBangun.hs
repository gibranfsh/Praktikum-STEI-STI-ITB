module JamBangun where

--Definisi dan Spesifikasi
jamBangun :: Int -> Int -> Int -> (Bool, Int, Int, Int)
    --Asumsi input selalu valid jam(0..23) menit(0..59) detik(0.59)

--Realisasi

jamBangun j m d =
    let detikjambangun = 7*3600 + 45*60
        detikjamdosen = j*3600 + m*60 + d
        selisih = abs(detikjambangun - detikjamdosen)
    in
        if detikjambangun > detikjamdosen then
            (True, div selisih 3600, div (mod selisih 3600) 60, mod (mod selisih 3600) 60)
        else
            (False , div selisih 3600, div (mod selisih 3600) 60, mod (mod selisih 3600) 60)