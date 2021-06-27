#include <iostream>
#include "userinput.h" // enthält Deklaration: int read_potential_prime_from_user();
#include "primemath.h" // enthält Deklaration: int smallest_divisor(int n);
int main()
{
	// Frage User wiederholt nach Zahl zum Primzahltest und prüfe sie bis User Abbruch anfordert (Eingabe 0)
	while (true) {
		int val = read_potential_prime_from_user();
		if (val == 0) // User hat Abbruch angefordert
			return 0;
		int smallest_div = smallest_divisor(val);
		std::cout << "Die Zahl " << val << " ist ";
		if (smallest_div == val)
			std::cout << "eine Primzahl." << std::endl;
		else
			std::cout << "keine Primzahl: " << smallest_div << " ist ein Teiler." << std::endl;
	}
} 