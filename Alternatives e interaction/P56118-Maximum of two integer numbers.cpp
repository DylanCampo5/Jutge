
// Escriba un programa que lea dos números e imprima su máximo.

#include <iostream>

int main () {
    int num1, num2, max;
    std::cin >> num1 >> num2;
    if (num1 > num2)
        max = num1;
    else
        max = num2;
    std::cout << max << std::endl;
    return 0;
}