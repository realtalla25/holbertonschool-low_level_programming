#include "main.h"

/**
 * print_alphabet - imprime l'alphabet en minuscules suivi d'un saut de ligne
 */
void print_alphabet(void)
{
	char *alphabet = "abcdefghijklmnopqrstuvwxyz";

	/* Imprimer l'alphabet */
	while (*alphabet)
	{
		_putchar(*alphabet);
		alphabet++;
	}

	/* Imprimer un saut de ligne */
	_putchar('\n');
}
