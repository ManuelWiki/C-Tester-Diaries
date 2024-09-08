#include <mylib.hpp>
#include "gtest/gtest.h"

TEST(main, firstTest) {
    for(int i = 0; i < 15; i++) {
        EXPECT_EQ(broken_is_even(i), i % 2 == 0) << "i: " << i << "\n";
    }
}