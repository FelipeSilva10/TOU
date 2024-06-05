/*
Horas e Minutos Para Minutos

Faça um programa para ler dois inteiros H e M, representando uma quantidade de horas e uma quantidade de minutos.
Converta os valores que recebeu como entrada para uma quantidade de minutos e imprima.
Por exemplo, caso H=2 e M=20, representa que você tem duas horas e vinte minutos, o que equivale a 140 minutos.

Entrada
A entrada consiste de duas linhas. A primeira linha contém o inteiro H e a segunda linha contém o inteiro M.

Saída
A saída consiste de uma linha contendo a quantidade convertida para minutos.

Restrições
Os inteiros fornecidos não serão negativos nem maiores que 1000.
 */

#include <iostream>

int main() {
 //Declaração de variáveis
 int H,M;

 //Entrada de dados
 std::cout<<"Insira as horas: ";
 std::cin>>H;
 std::cout<<"Insira os minutos: ";
 std::cin>>M;

 //Lógica
 if(0<=H<=1000&&0<=M<=1000) {
  while(H>0) {
   H=H-1;
   M=M+60;
  }
 }

 //Saída de dados
 std::cout<<"Minutos: "<<M;

 return 0;
}

