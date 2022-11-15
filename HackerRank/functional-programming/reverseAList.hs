rev :: [a] -> [a]
rev = foldl (flip (:)) []