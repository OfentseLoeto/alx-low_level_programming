#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strspn - Entry point
* @s: input
* @accept: input
*
* Return: Always 0 (Success)
*/


unsigned int _strspn(char *s, char *accept)

{
		
	int i, len, j;
	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{
	len++;
	break;
	}
	}
	
	if (s[i] != accept[j])
	{
	return (len);
	}
	}
	
	return (len);

}
