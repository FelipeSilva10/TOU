/*
Faça um algoritmo utilizando IF’s E ELSE’s combinados para verificar qual pastel a pessoa deseja: QUEIJO, CARNE ou MISTO.
Primeiro verifique se ela tem RS6.99, que é o valor do nosso pastel.
 */

#include <iostream>

int main() {
 //Declaração de variáveis
 int P;
 float D;
 //Entrada de dados
 std::cout<<"Você tem 6.99 R$?\n(1) SIM\n(2) NÃO\nR$: ";
 std::cin>>D;
 //Lógica e Saída de dados
 if(D==1) {
  std::cout<<"Certo! Você tem dinheiro suficiente.\nQual sabor de pastel você deseja: \n(1)QUEIJO\n(2)CARNE\n(3)MISTO\nSabor: ";
  std::cin>>P;
  if(P==1) {
   std::cout<<"Tudo certo! Seu pastel de QUEIJO estará pronto em breve.";
  }
  if(P==2) {
   std::cout<<"Tudo certo! Seu pastel de CARNE estará pronto em breve.";
  }
  if(P==3) {
   std::cout<<"Tudo certo! Seu pastel MISTO estará pronto em breve.";
  }
  if (P != 1 && P != 2 && P != 3) {
   std::cout<<"Digite um sabor válido!";
  }

 }
 else {
  std::cout<<"Sinto muito! Você não tem dinheiro suficiente para comprar o pastel.";
 }
 return 0;
}