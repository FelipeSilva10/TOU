/*
Faça um algoritmo utilizando IF’s E ELSE’s combinados para verificar qual pizza a pessoa deseja: CALABRESA, PRESUNTO ou MARGUERITA.
Primeiro verifique se ela tem RS49.99, que é o valor da nossa pizza
 */

#include <iostream>

int main() {
 //Declaração de variáveis
 int P;
 float D;
 //Entrada de dados
 std::cout<<"A pizza custa R$49.99, você tem?\n(1)SIM\n(2)NÃO\nRESPOSTA: ";
 std::cin>>D;
 //Lógica e Saída de dados
 if(D==1) {
  std::cout<<"Certo! Você tem dinheiro suficiente.\nQual sabor de pizza você deseja: \n(1)CALABRESA\n(2)PRESUNTO\n(3)MARGUERITA\nSabor: ";
  std::cin>>P;
  if(P==1) {
   std::cout<<"Tudo certo! Sua pizza de CALABRESA estará pronta em breve.";
  }
  if(P==2) {
   std::cout<<"Tudo certo! Sua pizza de PRESUNTO estará pronta em breve.";
  }
  if(P==3) {
   std::cout<<"Tudo certo! Sua pizza de MARGUERITA estará pronta em breve.";
  }
  if (P != 1 && P != 2 && P != 3) {
   std::cout<<"Digite um sabor válido!";
  }

 }
 else {
  std::cout<<"Sinto muito! Você não tem dinheiro suficiente para comprar a pizza.";
 }
 return 0;
}