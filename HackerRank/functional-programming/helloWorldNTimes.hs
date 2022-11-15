import Data.List

main = do
    n <- readLn :: IO Int
    putStr $ helloWorlds n

-- Print "Hello World" on a new line 'n' times.
helloWorlds :: Int -> String
helloWorlds n = intercalate "\n" (replicate n "Hello World")