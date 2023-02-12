#include "lists.h"


/**
 * main - generate and prints a passwords for the crackme5 executable
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{

	char password[7], *codex;
	int len = strlen(argv[1]), i, tmp;
	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (len ^ 59) & 63;
	password[0] = codex[temp];

	tmp = 0;

	for (
