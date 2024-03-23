/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informatica Básica 2023-2024
 *
 * @file P69277 First cubes
 * @author Dylan Gonzalo Campo Bedoya alu0101657189@ull.edu.es
 * @date Nov 2 2023
 * @brief Escriba un programa que lea un número n e imprima 0^3,1^3,…,(n−1)^3,n^3.
 * @bug There are no know bugs
 * @see https://jutge.org/problems/P69277
 */

#include <iostream> 
#include <cmath>

int main() {
  int num1;
  long int cubos;
  std::cin >> num1;

  long int end = (std::pow(num1, 3));
  for (int i = 0; i < num1; ++i) {
    cubos = (std::pow(i, 3));
    std::cout << cubos << ",";
  }
  std::cout << end << std::endl;

  return 0;
}