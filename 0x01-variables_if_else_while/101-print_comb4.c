#include <stdio.h>

/**
 * Author: ANEHI GODWIN OHINOYI
 * Program: WinMingle Community C Training
 * Description: Program that print all possible different combination of three digit
 */
int main(void)
{
    int i, j, k;

    i = 0;
    while (i <= 7)
    {
        j = i + 1;
        while (j <= 8)
        {
            k = j + 1;
            while (k <= 9)
            {
                // Print the separator BEFORE the number (except for 012)
                if (i != 0 || j != 1 || k != 2)
                {
                    putchar(',');     // Call 1
                    putchar(' ');     // Call 2
                }

                putchar(i + '0');     // Call 3
                putchar(j + '0');     // Call 4
                putchar(k + '0');     // Call 5
                
                k++;
            }
            j++;
        }
        i++;
    }
    
    putchar('\n'); // Standard final newline

    return (0);
}

