#include <iostream>

int main() {
    int division{0}, resto{0} num1, num2;
    std::cin >> num1 >> num2;
    division = num1 / num2;
    resto = num1 % num2;
    std::cout << division << " " << resto << std::endl;
    return 0;
}