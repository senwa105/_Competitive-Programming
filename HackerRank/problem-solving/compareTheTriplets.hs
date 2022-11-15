import Data.List

main = interact $ scoresString . scores . extract

extract :: String -> [Int] 
extract input = 
    let [a, b] = map (map (read::String->Int) . words) $ lines input
    in zipWith (-) a b

scores :: [Int] -> (Int, Int) 
scores = foldl tallyPoints (0,0)
    where tallyPoints (a,b) x
            | x > 0     = (a+1, b)
            | x < 0     = (a, b+1)
            | otherwise = (a,b)

scoresString :: (Int, Int) -> String 
scoresString (a,b) = show a ++ " " ++ show b
