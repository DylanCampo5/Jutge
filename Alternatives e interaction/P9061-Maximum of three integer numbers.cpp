
// Escriba un programa que lea tres números e imprima su máximo.

#include <iostream>
#include <cmath>

int main() {
  int num1, num2, num3, maximo, maximo2;
  std::cin >> num1 >> num2 >> num3;
  maximo = std::max(num1, num2);
  maximo2 = std::max(maximo, num3);
  std::cout << maximo2 << '\n';
  return 0;
}