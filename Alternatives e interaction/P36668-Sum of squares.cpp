/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informatica Básica 2023-2024
 *
 * @file P36668 Sum of squares
 * @author Dylan Gonzalo Campo Bedoya alu0101657189@ull.edu.es
 * @date Nov 2 2023
 * @brief Escriba un programa que lea un número natural n e imprima el resultado de la siguiente suma:
 * @bug There are no know bugs
 * @see https://jutge.org/problems/P36668
 */

#include <iostream>
#include <cmath>

int main() {
  int a, sumatorio{0}, i;
  std::cin >> a;
  for (i = 1; i <= a; i++) {
    sumatorio += std::pow(i, 2);
  }
  std::cout << sumatorio << std::endl;
  return 0;
}