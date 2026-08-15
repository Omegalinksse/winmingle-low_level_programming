#include "main.h"

/**
 *  * _atoi - Converts a string to an integer.
 *   * @s: The pointer to the string to convert.
 *    *
 *     * Return: The integer value converted from the string.
 *      *         If there are no numbers in the string, returns 0.
 *       *         Takes into account all '-' and '+' signs before the number.
 *        */
int _atoi(char *s)
{
		int i = 0;
			int sign = 1;
				unsigned int result = 0;
					int found_digit = 0;

						while (s[i] != '\0')
								{
											/* Track signs before any digits are found */
											if (s[i] == '-')
														{
																		sign *= -1;
																				}

													/* Extract digits */
													if (s[i] >= '0' && s[i] <= '9')
																{
																				found_digit = 1;
																							result = (result * 10) + (s[i] - '0');
																									}
															else if (found_digit)
																		{
																						/* Stop processing when non-digit character appears after digits */
																						break;
																								}

																	i++;
																		}

							return (result * sign);
}

