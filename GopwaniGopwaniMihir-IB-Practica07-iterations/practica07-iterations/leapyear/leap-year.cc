/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica
  *
  * @author Mihir Mahesh Gopwani Gopwani
  * @date Nov 02  2023
  * @brief Este codigo pide un año y te dice si es bisiesto o no
  */

#include<iostream>
int main() {
int num;
  std::cout<< "escribe un numero :";
  std::cin<< num;
  
  if ((num%4==0 && num%100!=0) || (num%400==0)) {
    std::cout<< "es un año bisiesto" ;
 } else {
  std::cout<< "no es un año bisiesto" ;
  }
return 0;
}

