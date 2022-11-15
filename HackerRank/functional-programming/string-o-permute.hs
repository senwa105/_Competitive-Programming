main = do
    input <- getContents
    mapM_ (putStrLn . swap) $ tail $ lines input

swap :: String -> String
swap (x:y:xs) = y : x : swap xs
swap _ = []