putManyLines[line] = do
                      putStrLn line

main = getLine >>= putManyLines
