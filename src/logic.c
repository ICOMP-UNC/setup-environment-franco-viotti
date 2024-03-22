#include "logic.h"

/**
 * @brief Add two numbers
 * @param first_number First number
 * @param second_number Second number
 * @return int with the result of the sum
*/
int add(int first_number, int second_number)
{
    return first_number + second_number;
}

/**
 * @brief Substract two numbers
 * @param first_number First number
 * @param second_number Second number
 * @return int with the result of the substraction

*/
int substract(int first_number, int second_number)
{
    return first_number - second_number;
}

/**
 * @brief Multiply two numbers
 * @param first_number First number
 * @param second_number Second number
 * @return int with the result of the multiplication
*/
int multiply(int first_number, int second_number)
{
    return first_number * second_number;
}

/**
 * @brief Divide two numbers
 * @param first_number First number
 * @param second_number Second number
 * @return double with the result of the division
*/
double divide(int first_number, int second_number)
{
    if (second_number != 0)
    {
        return (double)first_number / second_number;
    }
    else
    {
        return -1.0;
    }
}

