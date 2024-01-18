#include <doctest/doctest.h>
#include <fmt/core.h>
#include <string>


TEST_CASE("fmt") {

    SUBCASE("Basic formatting") {

        int age = 27;
        std::string name = "stefan";

        fmt::print("My name is {} and I am {}", name, age);
    }
}