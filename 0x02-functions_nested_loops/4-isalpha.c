#include "main.h"
/**
 * _isalpha - his fucntion prints the alphabet from a to z
 *
 * @c: edfwfef
 *
 * Description: this fucntion prints the alphabet from a to z
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
if (c >= 65 && c <= 90)
return (1);
return (0);
}
