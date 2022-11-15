main = interact $ staircase . (read::String->Int)

staircase :: Int -> String
staircase n =  unlines $ fmap (reverse . take n) $ fmap (\ i -> replicate i '#' ++ repeat ' ') [1..n]
