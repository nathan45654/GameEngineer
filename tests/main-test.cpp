#include "gtest/gtest.h"

#include <iostream>

#include "position-test.cpp"
#include "vector-test.cpp"
#include "rect-test.cpp"

int main(int argc, char** argv)
{
    std::cout << "This is test" << std::endl;
    testing::InitGoogleTest(&argc, argv);

    RUN_ALL_TESTS();

    return 0;
}
