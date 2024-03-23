
// Escriba un programa que lea una letra y la imprima en 
// minúsculas si estaba en mayúscula, o la imprima en 
// mayúsculas si estaba en minúscula.

#include <iostream>

int main() {
    char letra, solucion;
    std::cin >> letra;
    solucion = toupper(letra);
    if (solucion == letra) 
        solucion = tolower(letra);
    std::cout << solucion << std::endl;
    return 0; 
}