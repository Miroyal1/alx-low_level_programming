#include "main.h"

<<<<<<< HEAD
#include <stdio.h>



=======
>>>>>>> 9adc6ecb275b513e444cb6bc93cb498772c3355a
/**
 * _isupper - check for uppercase
 *
<<<<<<< HEAD
 *  * main - check the code.
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    char c;



	        c = 'A';

		    printf("%c: %d\n", c, _isupper(c));

		        c = 'a';

			    printf("%c: %d\n", c, _isupper(c));

			        return (0);

=======
 * @c: character
 *
 * Return: 1 if it is uppercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
>>>>>>> 9adc6ecb275b513e444cb6bc93cb498772c3355a
}
