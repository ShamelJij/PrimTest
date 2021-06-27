// Ermittle den kleinsten Teiler der �bergegebenen Zahl auf naive Weise
// Vorbedingung: Die Zahl muss >1 sein (keine Fehlerpr�fung)
int smallest_divisor(int n)
{
	for (int k = 2; k < n; ++k)
		if (n % k == 0) // % ist Modulo-Operator: n % k liefert Rest der Ganzzahldivision n / k
			return k;
	return n;
}