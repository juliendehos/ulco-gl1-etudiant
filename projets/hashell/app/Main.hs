import Cat

main :: IO ()
main = do
    res <- catTodo "TODO"
    putStrLn res

