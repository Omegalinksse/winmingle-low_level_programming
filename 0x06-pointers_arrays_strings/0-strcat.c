#include "main.h"

/**
 *  * _strcat - Concatenates two strings.
 *   * @dest: The target string buffer to append to.
 *    * @src: The source string to copy.
 *     *
 *      * Return: A pointer to the destination string dest.
 *       */
char *_strcat(char *dest, char *src)
{
		int i = 0;
			int j = 0;

				/* Find the end of dest (the position of the '\0' byte) */
				while (dest[i] != '\0')
						{
									i++;
										}

					/* Copy src characters starting at the end of dest */
					while (src[j] != '\0')
							{
										dest[i + j] = src[j];
												j++;
													}

						/* Add the terminating null byte */
						dest[i + j] = '\0';

							return (dest);
}

