-- This part deals with the Input and Output and can be used as it is. Do not modify it.
main = do
    inputdata <- getContents
    mapM_ (putStrLn. show). f. map read. lines $ inputdata

f :: [Int] -> [Int]
f [] = []
f [x] = []
f [x,y] = [y]
f (x:y:xs) = y : f xs


{-
QuomoZ's shorter version from the Hackerrank discussion tab
f (_:x:xs) = x : f xs
f _ = []
-}