main = do
    m <- getLine
    let n = (read::String->Int) m
    arrString <- getLine
    let arr = toIntList arrString
    print (roundToNDecimals (posRatio n arr) n)
    print (roundToNDecimals (negRatio n arr) n)
    print (roundToNDecimals (zeroRatio n arr) n)

toIntList :: String -> [Int]
toIntList input = map (read::String->Int) $ words input

posRatio :: Int -> [Int] -> Double
posRatio n arr = fromIntegral (length (filter (>0) arr)) / fromIntegral n

negRatio :: Int -> [Int] -> Double
negRatio n arr = fromIntegral (length (filter (<0) arr)) / fromIntegral n

zeroRatio :: Int -> [Int] -> Double
zeroRatio n arr = fromIntegral (length (filter (==0) arr)) / fromIntegral n

roundToNDecimals :: Double -> Int -> Double
roundToNDecimals x n = fromIntegral (floor (x * t)) / t
    where t = 10^n
