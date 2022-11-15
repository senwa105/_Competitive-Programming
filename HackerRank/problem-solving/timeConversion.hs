import Data.List
import Data.List.Split

main = do
    input <- getLine 
    let hour = getHour input
    let suffix = getSuffix input
    printStr $ convertTime input hour suffix

getHour :: String -> Int 
getHour = 
    let splitInput = splitAt 8 input
        -- convert time portion to [Int]
    in map ((read::String->Int) . dropWhile (=='0')) $ splitOn ":" $ fst $ splitInput

getSuffix :: String -> String 
getSuffix = snd $ splitAt 8

convertTime :: String -> Int -> String -> String
convertTime input hour suffix = 
    if suffix == "AM"
        then 
    else let newHour = hour + 12
         in show newHour ++ ":
