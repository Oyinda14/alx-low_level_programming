#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 * Return: Value of the last digit.
 */

int print_last_digit(nld)
{
    int nld;
    pld =  (nld % 10);
    if  (pld < 0)
    {
         return ( -nld);
    }
  return (pld);
}
