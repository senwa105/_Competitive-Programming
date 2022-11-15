len :: [a] -> Int
len = foldr (\ x acc -> acc+1) 0