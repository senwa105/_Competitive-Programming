-- This part is related to the Input/Output and can be used as it is
main = do
    input <- getLine
    print $ fib . (read :: String -> Int) $ input

fib :: Int -> Int
fib n = let sequence = 0 : 1 : zipWith (+) sequence (tail sequence)
      in sequence !! (n-1)