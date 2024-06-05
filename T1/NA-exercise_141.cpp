/*
Minutos Para Horas e Minutos

Faça um programa para ler um inteiro M representando uma quantidade em minutos. Imprima o equivalente em horas e minutos.
Por exemplo, caso M=70, isso equivale a 1 hora e 10 minutos.
Outro exemplo, caso M=500, isso equivale a 8 hora e 20 minutos.

Entrada
A entrada consiste de uma linha contendo o inteiro M.

Saída
A saída consiste de duas linhas. A primeira contém o equivalente em horas. A segunda contém o equivalente em minutos restantes.

Restrições
Os inteiros fornecidos não terem valor absoluto maior que 1000.
 */

#include <iostream>

int main() {
 //Declaração de variáveis
 int M,H =0;
 //Entrada de dados
 std::cout<<"Minutos: ";
 std::cin>>M;
 //Lógica
 if(M<=1000) {
   while(M>=60) {
       H=H+1;
       M=M-60;
   }
 }
 else {
     return 0;
 }

 //Saída de dados
 std::cout<<H<<" Horas\n"<<M<<" Minutos";

 return 0;
}
