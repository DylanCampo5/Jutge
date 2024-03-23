/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informatica Básica 2023-2024
 *
 * @file P61634 Leap years
 * @author Dylan Gonzalo Campo Bedoya alu0101657189@ull.edu.es
 * @date Nov 2 2023
 * @brief Escribe un programa que indique si un año es o no bisiesto. 
 *        Un año bisiesto tiene 366 días. Tras la reforma gregoriana, 
 *        los años bisiestos son aquellos múltiplos de cuatro que no 
 *        terminan en dos ceros, y también los años que terminan en dos 
 *        ceros de modo que, quitados esos dos ceros, son divisibles 
 *        por cuatro. Así, 1800 y 1900, aunque fueron múltiplos de cuatro, 
 *        no fueron años bisiestos; por el contrario, 2000 fue un año bisiesto.
 * @bug There are no know bugs
 * @see https://jutge.org/problems/P61634
 */

#include <iostream>

bool leap_year(int year){
  if (year % 100 == 0){
    if (year % 400 == 0){
      return true;
    }
    return false;
  }
  else if (year % 4 == 0){
    return true;
  }
  else {
    return false;
  }
}

int main() {
  int year;
  std::cin >> year;
  if (leap_year(year) == 0) {
    std::cout << "NO" << std::endl;
  }
  else {
    std::cout << "YES" << std::endl;
  }
  return 0;
}