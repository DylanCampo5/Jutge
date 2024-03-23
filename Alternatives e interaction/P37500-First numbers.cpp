/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informatica Básica 2023-2024
 *
 * @file P37500 First numbers
 * @author Dylan Gonzalo Campo Bedoya alu0101657189@ull.edu.es
 * @date Nov 2 2023
 * @brief Escriba un programa que lea un número n e imprima todos los números entre 0 y n.
 * @bug There are no know bugs
 * @see https://jutge.org/problems/P37500
 */

#include <iostream>

int main() {
  int a;
  std::cin >> a;
  for (int i = 0; i <= a; i++) {
    std::cout << i << std::endl;
  }
  return 0;
}