/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Mihir Mahesh Gopwani Gopwani
 * @date Oct 27 2023
 * @brief Este programa convierte numeros binarios en decimales.
*/
#include <iostream>
int main () {
  int num;
    std::cout<< "escribe un numero entero :";
    std::cin >> num;
   
    for (int i = 128; i > 0; i=i/2) {
      if (num >= i) {
       std::cout<< 1;
       num = num-i;
      }

      else {
       std::cout<< 0;
      }
    }
  
return 0;
} 
    

