#include <stdio.h>

int main(void)
{
	// Affiche la taille d'un char en octets.
	prinf("Size of a char: %zu byte(s)\n", sizeof(char));

	// Afficche la taille d'un int en octets.
	printf("Size of an int: %zu byte(s)\n", sizeof(int));

	// Affiche la taille d'un long int en octets.
	printf("Size of a long int: %zu byte(e)\n", sizeof(long int));

	// Affiche la taille d'un long long int en octets.
	printf("Size of a long long int: %zu byte(e)\n", sizeof(long long int));

	// Affiche la taille d'un float en octets.
	printf("Size of a float: %zu byte(e)\n", sizeof(float));

	// Indique que le programme s'est terminé correctement.
	return (0);
}
