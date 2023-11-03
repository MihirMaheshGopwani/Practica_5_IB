/**
    * Universidad de La Laguna
    * Escuela Superior de Ingeniería y Tecnología
    * Grado en Ingeniería Informática
    * Informática Básica
    *
    * @author Mihir Mahesh Gopwani Gopwani
    * @date Oct 31 2023
    * @brief
 */
#include<iostream> 
int main () {
int num;
  std::cout<< "escribe un numero :";
  std::cin >> num;

  int termAnt=0;   //Termino anterior
  int termAct=1;   //Termino actual

  if (num>=1) {
    std::cout<< termAnt;
  }
  
  if (num>=2) {
    std::cout<<", " >> termAct;
  }

  for (int i =3 ; i<= num; i++) {
    int termSig= termAnt+termAct;
   // el termino siguiente es la suma del anterior y el actual
   // que es así como se construye la serie de fibonacci
    
    std::cout<<", " << termSig;
    termAnt = termAct;
    termAct= termSig;
    
  }
return 0;
}
  
