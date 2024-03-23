/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informatica Básica 2023-2024
 *
 * @file P59875 Top to Botton
 * @author Dylan Gonzalo Campo Bedoya alu0101657189@ull.edu.es
 * @date Nov 2 2023
 * @brief Escriba un programa que lea dos números xey, e imprima 
 *        todos los números entre xey (o entre yyx), en orden decreciente.
 * @bug There are no know bugs
 * @see https://jutge.org/problems/P59875
 */

#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;
  if (b > a) {
    for (int i = b; i >= a; i--) {
      std::cout << i << std::endl;
    }
  }
  else {
    for (int i = a; i >= b; i--) {
      std::cout << i << std::endl;
    }
  }
  return 0;
}