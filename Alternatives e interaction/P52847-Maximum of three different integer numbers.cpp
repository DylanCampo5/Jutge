
// Escriba un programa que lea tres números e imprima su máximo.

#include <iostream>

int main () {
    int num1, num2, num3, max;
    std::cin >> num1 >> num2 >> num3;
    
    if (num1 > num2) {
        if (num1 > num3)
            max = num1;
        else 
            max = num3;
    }
    else {
        if (num2 > num3)
            max = num2;
        else 
            max = num3
    }
    std::cout << max << std::endl;
    return 0;
}