#include <stdio.h>

/**
 * Author: ANEHI GODWIN OHINOYI
 * Program: WinMingle Community C Training
 * Description: Program that print all possible different combination of two digit
 */
int main(void)
{
    int i, j;

    i = 0;
    while (i <= 9)
    {
        j = i + 1; // Ensures j is always greater than i, preventing duplicates like 10 after 01
        while (j <= 9)
        {
            putchar(i + '0'); // Call 1: Prints the tens digit
            putchar(j + '0'); // Call 2: Prints the units digit
            
            // Only print the comma and space if it's NOT the last combination (78)
            if (i != 8 || j != 9)
            {
                putchar(','); // Call 3: Prints the comma
                putchar(' '); // Call 4: Prints the space
            }
            j++;
        }
        i++;
    }
    putchar('\n'); // Call 5: Prints the final newline

    return (0);
}

