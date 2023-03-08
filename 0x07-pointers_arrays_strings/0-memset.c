#include "main.h"

/**
 *  * _memset -fill memory with constant values
 *   * @s: pointer to char params
 *    * @b: constant byte
 *     * @n: byte of mem area
 *      * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
		 int i = 0;

				for (; n > 0; i++)
				{
					s[i] = b;
					n--;
				}
				return (s);
}
