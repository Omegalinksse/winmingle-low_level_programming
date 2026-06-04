#include "main.h"

/**
 * convert_day - converts date to day of year and determines if leap year
 * @month: month in number
 * @day: day in number
 * Return: day of the year
 */
int convert_day(int month, int day)
{
    int days_in_months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i;

    for (i = 1; i < month; i++)
        day += days_in_months[i];

    return (day);
}

