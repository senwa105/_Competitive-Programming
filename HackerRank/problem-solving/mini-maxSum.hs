import Data.List

main = interact printResults

toIntList :: String -> [Int]
toIntList = map (read::String->Int) . words

minSum :: [Int] -> Int
minSum arr = sum $ delete (maximum arr) arr

maxSum :: [Int] -> Int
maxSum arr = sum $ delete (minimum arr) arr

printResults :: String -> String
printResults input =
    let arr = toIntList input
    in show (minSum arr) ++ " " ++ show (maxSum arr)
