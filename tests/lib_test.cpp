#include <lib/lib.h>
#include <gtest/gtest.h>

TEST(lib_Test, TestFibonacciThree_One)
{
    const auto expected=1;
    const auto actual=fibonacci(3);
    ASSERT_EQ(expected,actual);
}
TEST(lib_Test, TestFibonacciSeven_Eight)
{
    const auto expected=8;
    const auto actual=fibonacci(7);
    ASSERT_EQ(expected,actual);
}
TEST(lib_Test, TestFibonacciZero_Negative)
{
    const auto expected=-1;
    const auto actual=fibonacci(0);
    ASSERT_EQ(expected,actual);
}
TEST(lib_Test, TestFibonacciTen_Thirtyfour)
{
    const auto expected=34;
    const auto actual=fibonacci(10);
    ASSERT_EQ(expected,actual);
}



TEST(lib_Test,TestIsPrimeTwo_True)
{
    const auto expected=true;
    const auto actual=isPrime(2);
    ASSERT_EQ(expected,actual);
}
TEST(lib_Test,TestIsPrimeNegative_False)
{
    const auto expected=false;
    const auto actual=isPrime(-5);
    ASSERT_EQ(expected,actual);
}
TEST(lib_Test,TestIsPrimeSeventeen_True)
{
    const auto expected=true;
    const auto actual=isPrime(17);
    ASSERT_EQ(expected,actual);
}
TEST(lib_Test,TestIsPrimeThirtyone_True)
{
    const auto expected=true;
    const auto actual=isPrime(31);
    ASSERT_EQ(expected,actual);
}



TEST(lib_Test,TestisPowerOfTwoEight_True)
{
    const auto expected=true;
    const auto actual=isPowerOfTwo(8);
    ASSERT_EQ(expected,actual);
}
TEST(lib_Test,TestisPowerOfTwoOne_True)
{
    const auto expected=true;
    const auto actual=isPowerOfTwo(1);
    ASSERT_EQ(expected,actual);
}
TEST(lib_Test,TestisPowerOfTwoSeven_False)
{
    const auto expected=false;
    const auto actual=isPowerOfTwo(7);
    ASSERT_EQ(expected,actual);
}
TEST(lib_Test,TestisPowerOfTwoThirtytwo_True)
{
    const auto expected=true;
    const auto actual=isPowerOfTwo(32);
    ASSERT_EQ(expected,actual);
}



TEST(lib_Test,TestNumberOfOnesEight_One)
{
    const auto expected=1;
    const auto actual=numberOfOnes(8);
    ASSERT_EQ(expected,actual);
}
TEST(lib_Test,TestNumberOfOnesThree_Two)
{
    const auto expected=2;
    const auto actual=numberOfOnes(3);
    ASSERT_EQ(expected,actual);
}
TEST(lib_Test,TestNumberOfOnesZero_Zero)
{
    const auto expected=0;
    const auto actual=numberOfOnes(0);
    ASSERT_EQ(expected,actual);
}
TEST(lib_Test,TestNumberOfOnesThirtyOne_Five)
{
    const auto expected=5;
    const auto actual=numberOfOnes(31);
    ASSERT_EQ(expected,actual);
}



int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

