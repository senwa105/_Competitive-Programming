main = interact $ show . countGreatest . toIntList

toIntList :: String -> [Int]
toIntList input = tail $ map (read::String->Int) $ words input

countGreatest :: [Int] -> Int 
countGreatest arr =
    let greatest = maximum arr
    in foldl (\ acc x -> if x == greatest then acc+1 else acc) 0 arr