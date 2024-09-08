include(FetchContent)
FetchContent_Declare(
    gtest
    QUIET
    URL https://github.com/google/googletest/archive/release-1.10.0.tar.gz
)
set(gtest_force_shared_crt ON CACHE BOOL "So all tests run in the same program" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(gtest)

add_executable(test "main.cpp")

target_link_libraries(test PRIVATE
    MyLib
    gtest_main
)

target_include_directories(test PUBLIC
    "../include"
)

include(GoogleTest)
gtest_discover_tests(test
    PROPERTIES
        LABELS "unit"
    DISCOVERY_TIMEOUT
        240
)