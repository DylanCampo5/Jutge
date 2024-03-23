/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informatica Básica 2023-2024
 *
 * @file P59539 Harmonic numbers (1)
 * @author Dylan Gonzalo Campo Bedoya alu0101657189@ull.edu.es
 * @date Nov 2 2023
 * @brief Escriba un programa que lea un número n e imprima el 
 *        número armónico n, definido como Hn = 1/1 + 1/2 + ⋯ + 1/n.
 * @bug There are no know bugs
 * @see https://jutge.org/problems/P59539
 */

#include <iostream> 
#include <algorithm> 
#include <cmath>

int main() {
    double num, suma{0};
    std::cin >> num;
    
    for (int i = 1; i <= num; ++i) {
        suma += (1.0 / i);
    }
    
    std::cout.precision(4);
    std::cout << std::fixed << suma << std::endl;
    return 0;
}