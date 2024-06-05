/*
Faça um algoritmo que diga se o preço da gasolina está caro ou barato.
SE O PREÇO FOR MAIOR QUE 5.98 A GASOLINA ESTÁ CARA. SENÃO ELA ESTÁ BARATA
 */

#include <iostream>

int main() {
 //Declaração de variáveis
 float PG;
 //Entrada de dados
 std::cout<<"Digite o valor da gasolina: ";
 std::cin>>PG;
 //Lógica e Saída de dados
 if(PG>5.98) {
  std::cout<<"A gasolina está cara!";
 }
 else {
  std::cout<<"A gasolina está barata!";
 }

 return 0;
}