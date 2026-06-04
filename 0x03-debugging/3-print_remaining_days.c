#include <stdio.h>
#include "main.h"

void print_remaining_days(int month, int day, int year)
{
    /* Leap year logic: divisible by 4, not by 100, OR divisible by 400 */
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        if (month > 2)
            day++;

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        /* Check for invalid date: Feb 29 in a non-leap year */
        if (month == 2 && day == 60)
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}

