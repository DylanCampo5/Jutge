
/*
Escriba un programa que lea una letra y que indique si es mayúscula o minúscula
, y que también indique si es una vocal o una consonante. Aquí, supongamos que las 
vocales son 'a', 'e', ​​'i', 'o' y 'u', y sus correspondientes letras mayúsculas.
*/

#include <iostream> 
#include <vector>

char clasificacion() {
  char letra;
  bool confirma = false;
  std::cin >> letra;
  std::vector<char> vocales = {'a', 'e', 'i', 'o', 'u', 
                                   'A', 'E', 'I', 'O', 'U'};
  if (letra >= 97 && letra <= 122) {
    std::cout << "lowercase" << std::endl;
  }
  else {
    std::cout << "uppercase" << std::endl;
  }

  for (int i = 0; i < vocales.size(); ++i) {
    char vocal;
    vocal = vocales[i];
    if (letra == vocal) {
      std::cout << "vowel" << std::endl;
      confirma = true;
      break;
    }
  }
  if (confirma == false) {
    std::cout << "consonant" << std::endl;
  }
  return letra;
}

int main() {
  char resultado = clasificacion();
  return 0;
}