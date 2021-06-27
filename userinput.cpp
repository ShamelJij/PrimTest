#include <iostream>
int read_potential_prime_from_user()
{
	int val;
	// Eingabe ohne Fehlerbehandlung
	std::cout << "\nGeben Sie eine Zahl zum Primzahltest ein oder 0 zum Beenden: " << std::endl;
	std::cin >> val;
	return val;
}