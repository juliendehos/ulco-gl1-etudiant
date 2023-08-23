module CatSpec (main, spec) where

import Test.Hspec

import Cat

main :: IO ()
main = hspec spec

spec :: Spec
spec = 

    describe "test 1" $ do

        it "assert 1" $ do
            True `shouldBe` True

