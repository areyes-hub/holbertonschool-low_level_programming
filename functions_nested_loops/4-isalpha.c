#include "main.h"
/**
 * _isalpha - Checks for letters upper and lower
 * @c: parameter to be checked
 * Return: 1 if its a letter 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
