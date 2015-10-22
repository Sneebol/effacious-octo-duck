fruits = ["apple", "pear", "orange", "pineapple", "mango", "plum", "banana"]

putManyLines list = do
                     mapM_ putStrLn list

main = getLine >>= putManyLines >> putManyLines fruits
