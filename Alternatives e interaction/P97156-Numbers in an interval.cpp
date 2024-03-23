/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informatica Básica 2023-2024
 *
 * @file P97156 Numbers in an interval
 * @author Dylan Gonzalo Campo Bedoya alu0101657189@ull.edu.es
 * @date Nov 2 2023
 * @brief Escriba un programa que lea dos números a y b e imprima todos los números entre a y b.
 * @bug There are no know bugs
 * @see https://jutge.org/problems/P97156
 */

#include <iostream>

int main() {
  int n1, n2;
  std::cin >> n1 >> n2;
  for (int i = n1; i < n2; i++) {
    std::cout << i << ",";
  }
  if (n1 < n2) {
    std::cout << n2 << "\n";
  }
  if (n1 > n2) {
    std::cout << std::endl;
  }
  if (n1 == n2) {
    std::cout << n2 << '\n';
  }  
  return 0;
}