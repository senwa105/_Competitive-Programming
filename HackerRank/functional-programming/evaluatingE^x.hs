main = do
    inputdata <- getContents
    mapM_ print $ f $ map (read :: String -> Double) $ tail $ lines inputdata

f :: [Double] -> [Double]
f = map approxNaturalExp

approxNaturalExp :: Double -> Double 
approxNaturalExp x = 1 + x + (x^2 / 2) + (x^3 / 6) + (x^4 / 24) + (x^5 / 120) +
                     (x^6 / 720) + (x^7 / 5040) + (x^8 / 40320) + (x^9 / 362880)