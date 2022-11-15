main = interact $ tail $ lines input -- remove T at this point

solve :: String -> String 
solve [] = []
solve (n:arr) = 
    let numPairs = read n :: int
        nextTests = drop numPairs arr
    in take numPairs arr : solve

extract :: String -> [String]
extract (numPairs:arr) = take (read numPairs :: int) arr

isFunction :: String -> Bool 





nubBy (\ (x,_) (y,_) -> x == y) test 