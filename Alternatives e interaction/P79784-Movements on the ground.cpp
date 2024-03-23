/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informatica Básica 2023-2024
 *
 * @file P79784 Movements on the ground
 * @author Dylan Gonzalo Campo Bedoya alu0101657189@ull.edu.es
 * @date Nov 2 2023
 * @brief Escriba un programa que lea una secuencia de caracteres, 
 *        cada uno de los cuales codifique un movimiento ('n' ‍para 
 *        el norte, 's' para el sur, 'e' para el este y 'w' para el 
 *        oeste), y que calcule la posición final de un objeto 
 *        inicialmente ubicado en (0, 0). Supongamos que el primer 
 *        componente corresponde a la dirección este-oeste, que ir al 
 *        est significa sumar 1 a ese componente y que ir al sur significa 
 *        sumar 1 al segundo componente.
 * @bug There are no know bugs
 * @see https://jutge.org/problems/P79784
 */

#include <iostream>
#include <vector>

int main() {
    int OY{0}, OX{0};
    std::vector<char> coords;
    char coord;
    
    do {
        std::cin >> coord;

        if (coord == 'n' || coord == 'e' || coord == 's' || coord == 'w') 
            coords.push_back(coord);
            
    } while (coord != 'n' || coord != 'e' || coord != 's' || coord != 'w');

    for (int i = 0; i < coords.size(); i++) {
        if (coords[i] == 'n')
            OY++;
        else if (coords[i] == 's')
            OY--;
        else if (coords[i] == 'e')
            OX++;
        else if (coords[i] == 'w')
            OX--;
    }

    std::cout << '(' << OX << ", " << OY << ')' << std::endl;
    return 0;
}