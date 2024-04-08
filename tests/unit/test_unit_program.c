#include <unity.h>
#include "logic.h"

/**
 * @brief Test the add function
*/
void test_logic_add(void)
{
    TEST_ASSERT_EQUAL(5, add(2, 3));
    TEST_ASSERT_NOT_EQUAL(5, add(2, 2));
}

/**
 * @brief Test the substract function
*/
void test_logic_substract(void)
{
    TEST_ASSERT_EQUAL(2, substract(5, 3));
    TEST_ASSERT_NOT_EQUAL(2, substract(5, 5));
}

/**
 * @brief Test the multiply function
*/
void test_logic_multiply(void)
{
    TEST_ASSERT_EQUAL(6, multiply(2, 3));
    TEST_ASSERT_NOT_EQUAL(6, multiply(2, 2));
}

/**
 * @brief Test the divide function
*/
void test_logic_divide(void)
{
    TEST_ASSERT_EQUAL(2, divide(6, 3));
    TEST_ASSERT_NOT_EQUAL(2, divide(6, 6));
    TEST_ASSERT_NOT_EQUAL(2, divide(3, 0));
}


/**
 * @brief This is run BEFORE each test
*/
void setUp(void)
{
}

/**
 * @brief This is run AFTER each test
*/
void tearDown(void)
{
}

int main(void)
{
    // Start the unity framework
    UNITY_BEGIN();
    RUN_TEST(test_logic_add);
    RUN_TEST(test_logic_substract);
    RUN_TEST(test_logic_multiply);
    RUN_TEST(test_logic_divide);
    return UNITY_END();
}
