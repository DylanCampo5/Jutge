#include <iostream>

int main() {
    int num1, division{0}, resto{0};
    unsigned int num2;
    std::cin >> num1 >> num2;   //-32 6     -6 4
    division = num1 / num2;
    resto = num1 % num2;
    std::cout << division << " " << resto << std::endl;
    return 0;
}