#include "MyClass.hpp"

#include <catch2/catch.hpp>
#include <sstream>

TEST_CASE( "init & getter", "[MyClass]" ) {
    // TODO créer un objet MyClass et testez le getter mydata
}

TEST_CASE( "setter", "[MyClass]" ) {
    // TODO tester le setter mydata
}

TEST_CASE( "reset", "[MyClass]" ) {
    // TODO set puis reset puis tester
}

TEST_CASE( "fail", "[MyClass]" ) {
    // TODO tester que fail lance une exception (et tester le contenu de cette exception)
}

TEST_CASE( "sqrt2", "[MyClass]" ) {
    // TODO tester le résultat de sqrt2 à 0.001 près
}

TEST_CASE( "operator<<", "[MyClass]" ) {
    // TODO tester l'operateur << (après un set).
    // Indication : utiliser std::ostringstream.
}

