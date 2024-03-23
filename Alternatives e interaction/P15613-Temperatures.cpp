
/* 
Escribe un programa que lea un número entero que represente una temperatura dada en grados 
Celsius y que indique si hace calor, si hace frío o si está bien. Supongamos que hace calor 
si la temperatura es superior a 30 grados, que hace frío si la temperatura es inferior a 10 
grados y que, en caso contrario, está bien. Además, avisa si con la temperatura dada el agua 
herviría, o si se congelaría. Suponga que el agua hierve a 100 grados o más y que el agua se 
congela a 0 grados o menos. 
*/

#include <iostream>

int main() {
    int Temperatura;
    if (Temperatura > 30) {
        std::cout << "it's hot" << std::endl;
        if (Temperatura => 100) 
            std::cout << "\nwater would boil" std::endl;
    }
    else if (Temperatura < 10) {
        std::cout << "it's cold" << std::endl;
        if (Temperatura =< 0)
            std::cout << "\nwater would freeze" << std::endl;
    }
    else 
        std::cout << "it's ok" << std::endl;
}