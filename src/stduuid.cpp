#include <doctest/doctest.h>
#include <fmt/core.h>
#include <uuid.h>
#include <random>
#include <iostream>
#include <string>
#include <sstream>


TEST_CASE("stduuid") {
    SUBCASE("Random id") {
        std::size_t h1 = std::hash<std::string>{}("user-1");
        std::size_t h2 = std::hash<std::string>{}("user-2");

        std::stringstream s1, s2;
        s1 << std::hex << h1;
        s2 << std::hex << h2;

        fmt::println("hash-1: {}", s1.str());
        fmt::println("hash-2: {}", s2.str());

    }
}