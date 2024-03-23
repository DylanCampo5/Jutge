/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informatica Básica 2023-2024
 *
 * @file P97969 Counting a's (1)
 * @author Dylan Gonzalo Campo Bedoya alu0101657189@ull.edu.es
 * @date Nov 2 2023
 * @brief Escriba un programa que lea una secuencia de caracteres terminada en un punto e imprima el número de letras "a" en la secuencia.
 * @bug There are no know bugs
 * @see https://jutge.org/problems/P97969
 */

#include <iostream>
#include <string>
 
int counting() {
  char letra;
  int cantidad{0};
  std::string word;
  std::getline(std::cin, word);

  for (int i = 0; i < word.length(); ++i) {
    letra = word[i];
    if (letra == 97) {
      cantidad += 1;
    }
    if (letra == '.') {
      break;
    }
  }

  return cantidad;
}

int main() {
  int resultado = counting();
  std::cout << resultado << std::endl;
  return 0;
}