#include "main.h"

/**
 *  * puts_half - Prints the second half of a string, followed by a new line.
 *   * @str: Pointer to the input string.
 *    *
 *     * Description: If the number of characters is odd, the function prints
 *      * the last n characters, where n = (length_of_the_string - 1) / 2.
 *       */
void puts_half(char *str)
{
		int length = 0;
			int start;

				/* Calculate string length */
				while (str[length] != '\0')
						{
									length++;
										}

					/* Determine starting index for the second half */
					if (length % 2 == 0)
							{
										start = length / 2;
											}
						else
								{
											start = (length + 1) / 2;
												}

							/* Print characters from start index to end */
							while (str[start] != '\0')
									{
												_putchar(str[start]);
														start++;
															}
								_putchar('\n');
}

