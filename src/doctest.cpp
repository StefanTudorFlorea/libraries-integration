#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>


TEST_CASE("doctest") {
    SUBCASE("subcase-1") {
        CHECK(1==1);
    }

    SUBCASE("subcase-2") {
        CHECK(1==1);
    }
}