#include "main.h"
#include <stdio.h>

<<<<<<< HEAD
#include <stdio.h>



=======
>>>>>>> 9adc6ecb275b513e444cb6bc93cb498772c3355a
/**
 * main - check the code.
 *
<<<<<<< HEAD
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
=======
 * Return: Always 0.
>>>>>>> f93a9392cb8f56a4f00a330039ceed436a84fb7f
 */
int main(void)
{
<<<<<<< HEAD
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
>>>>>>> 9adc6ecb275b513e444cb6bc93cb498772c3355a
=======
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
>>>>>>> f93a9392cb8f56a4f00a330039ceed436a84fb7f
}
