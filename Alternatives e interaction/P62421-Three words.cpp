/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informatica Básica 2023-2024
 *
 * @file P62421 Three words
 * @author Dylan Gonzalo Campo Bedoya alu0101657189@ull.edu.es
 * @date Nov 2 2023
 * @brief Escriba un programa que lea tres palabras a, byc, e imprima una línea con c, by a en este orden.
 * @bug There are no know bugs
 * @see https://jutge.org/problems/P62421
 */

#include <iostream>
#include <string>

int main() {
  std::string word1;
  std::string word2;
  std::string word3;
  std::cin >> word1 >> word2 >> word3;
  
  std::cout << word3 << " " << word2 << " " << word1 << std::endl; 
  return 0;
}