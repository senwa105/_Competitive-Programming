import Data.List

main = interact $ show . absDiagDifference . getArray

getArray :: String -> [[Int]]
getArray input = map (map (read::String->Int) . words) $ tail $ lines input

diagonalSum :: [[Int]] -> Int
diagonalSum arr = fst $ foldl (\ (sum,i) x -> (sum + (x !! i), i+1)) (0,0) arr

absDiagDifference :: [[Int]] -> Int
absDiagDifference arr = abs (diagonalSum arr - diagonalSum (reverse arr))
