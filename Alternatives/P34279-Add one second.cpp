
// Escriba un programa que agregue un segundo al tiempo de un reloj, dadas sus horas, minutos y segundos.

#include <iostream>

int main() {
	int num1, num2, num3;
	std::cin >> num1 >> num2 >> num3;
	if (true) {
		if (num3 == 59) 
			std::cout << num1 << ":" << num2+1 << ":" << "00" << std::endl;
		else if (num3 == 59 && num2 == 59) 
			std::cout << num1+1 << ":" << "00" << ":" << "00" << std::endl;
		else if 
			std::cout << num1 << ":" << num2 << ":" << num3+1 << std::endl;
	}
	return 0;
}