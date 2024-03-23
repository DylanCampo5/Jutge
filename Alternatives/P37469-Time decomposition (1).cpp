
// Escriba un programa que, dado un número de segundos n, imprima el número de horas, minutos y segundos representados por n.

#include <iostream>

int main() {
	int n, resultado;
	std::cin >> n;
	resultado = n / 3600 << " " << (n % 3600) / 60 << " " << ((n % 3600) % 60) % 60;
	std::cout << resultado << std::endl;
	return 0;
}