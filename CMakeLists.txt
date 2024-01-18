# config
set(CMAKE_TOOLCHAIN_FILE "./tools/vcpkg/scripts/buildsystems/vcpkg.cmake")
cmake_minimum_required(VERSION 3.20)
project(libraries-integration)

# 3rd party
find_package(doctest  CONFIG REQUIRED)
find_package(fmt      CONFIG REQUIRED)
find_package(stduuid  CONFIG REQUIRED)
find_package(redis++  CONFIG REQUIRED)

# examples
add_executable(tests 
    src/doctest.cpp
    src/fmt.cpp
    src/stduuid.cpp
)

target_link_libraries(tests 
    PRIVATE 
        doctest::doctest
        stduuid
        fmt::fmt
        redis++::redis++_static
)
