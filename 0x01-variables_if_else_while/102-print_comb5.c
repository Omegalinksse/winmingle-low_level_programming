#include <stdio.h>

/**
 * Author: ANEHI GODWIN OHINOYI
 * Program: WinMingle Community C Training
 * Description: Program that print all possible combination of two two digit
 */
int main(void)
{
    int a, b;

    a = 0;
    while (a <= 98)
    {
        b = a + 1; // Ensures the second number is always greater than the first
        while (b <= 99)
        {
            // Print the separator BEFORE the combination (except for the very first one)
            if (a != 0 || b != 1)
            {
                putchar(',');
                putchar(' ');
            }

            // Print the first two-digit number (a)
            putchar((a / 10) + '0'); // Tens place
            putchar((a % 10) + '0'); // Units place

            putchar(' '); // Space between the two numbers

            // Print the second two-digit number (b)
            putchar((b / 10) + '0'); // Tens place
            putchar((b % 10) + '0'); // Units place

            b++;
        }
        a++;
    }
    putchar('\n');

    return (0);
}

