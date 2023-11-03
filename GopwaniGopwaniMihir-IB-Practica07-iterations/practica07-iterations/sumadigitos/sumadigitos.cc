#include<iostream>

int main () {

  int num;
  std::cout << "escribe un numero :";
  std::cin >> num;

    int millar;
      millar = (num/1000);

    int centena;
      centena = ((num%1000) / 100);

    int decena;
      decena = (((num%1000)%100)/10);

    int unidad;
      unidad = (((num%1000)%100)%10);
    
    std::cout << "La suma da " << millar + centena + decena + unidad;
  return 0;
}
