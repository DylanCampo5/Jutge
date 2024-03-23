/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informatica Básica 2023-2024
 *
 * @file P31170 Multiplication table
 * @author Dylan Gonzalo Campo Bedoya alu0101657189@ull.edu.es
 * @date Nov 2 2023
 * @brief Escriba un programa que lea un número n e imprima la “tabla de multiplicar” de n.
 * @bug There are no know bugs
 * @see https://jutge.org/problems/P31170
 */

#include <iostream>

int main() {
  int a, tabla, i;
  std::cin >> a;
  for (i = 1; i <= 10; i++) {
    std::cout << a << "*" << i << " = " << a * i << std::endl;
  }
  return 0;
}