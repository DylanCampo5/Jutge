/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informatica Básica 2023-2024
 *
 * @file P28754 Reversed number in binary
 * @author Dylan Gonzalo Campo Bedoya alu0101657189@ull.edu.es
 * @date Nov 2 2023
 * @brief Escriba un programa que lea un número e imprima su representación binaria al revés.
 * @bug There are no know bugs
 * @see https://jutge.org/problems/P28754
 */

#include <iostream>
#include <string>
#include <algorithm>

int main() {
  long long int Num1;
  std::string binario = "";
  std::cin >> Num1;
  
  if (Num1 == 0) {
    binario = "0";
  }
  
  while (Num1 > 0) {
    if (Num1 % 2 == 0) {
      binario = "0" + binario;
    } else {
      binario = "1" + binario;
    }
    Num1 = Num1 / 2;
  }

  std::reverse(binario.begin(), binario.end());
  std::cout << binario << std::endl;
}