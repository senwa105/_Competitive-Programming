-- This part handles the Input/Output and can be used as it is. Do not change or modify it.
main = do
    inputdata <- getContents
    print $ f $ map (read :: String -> Int) $ lines inputdata

f :: [Int] -> Int
f arr = sum $ filter odd arr