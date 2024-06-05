/*
Faça um algoritmo utilizando IF’s E ELSE’s combinados para verificar qual pizza a pessoa deseja: CALABRESA, PRESUNTO ou MARGUERITA.
Primeiro verifique se ela tem RS49.99, que é o valor da nossa pizza.

Faça o mesmo exercício anterior, mas agora a pessoa pode escolher todos os produtos.
DICA: pergunte a quantidade de cada item antes de calcular. Cuidado com os tipos de dados que você utiliza.
*/

#include <iostream>

int main() {
 //Declaração de variáveis
 int PIZZA,VALOR,CALABRESA,PRESUNTO,MARGUERITA,SABOR_UNICO,SABOR_DUPLO1,SABOR_DUPLO2;

 //Entrada de dados
 std::cout<<"Bem vindo a Pizzaria do C++!\nTodos nossos sabores de pizza custam R$49.99.\n\nCARDÁPIO:\nCALABRESA\nPRESUNTO\nMARGUERITA\n\nQuantas pizzas você vai querer: ";
 std::cin>>PIZZA;
 VALOR=PIZZA*49.99;

 //Lógica e Saída de dados

 //Se for somente 1 sabor de pizza
 if(PIZZA==1) {
  std::cout<<"\nQual sabor de pizza você deseja?\n(1)CALABRESA\n(2)PRESUNTO\n(3)MARGUERITA\nSabor: ";
  std::cin>>SABOR_UNICO;
  if(SABOR_UNICO==1) {
   std::cout<<"\nTudo certo! Sua pizza de CALABRESA estará pronta em breve.\nValor da compra: R$"<<VALOR;
  }
  if(SABOR_UNICO==2) {
   std::cout<<"\nTudo certo! Sua pizza de PRESUNTO estará pronta em breve.\nValor da compra: R$"<<VALOR;
  }
  if(SABOR_UNICO==3) {
   std::cout<<"\nTudo certo! Sua pizza de MARGUERITA estará pronta em breve.\nValor da compra: R$"<<VALOR;
  }
  if (SABOR_UNICO != 1 && SABOR_UNICO != 2 && SABOR_UNICO != 3) {
   std::cout<<"\nDigite um sabor válido!";
  }
 }

 //Se for 2 sabores de pizza
 if(PIZZA==2) {
  std::cout<<"\nSabor da 1° pizza: \n(1)CALABRESA\n(2)PRESUNTO\n(3)MARGUERITA\nSabor: ";
  std::cin>>SABOR_DUPLO1;
  std::cout<<"\nSabor da 2° pizza: \n(1)CALABRESA\n(2)PRESUNTO\n(3)MARGUERITA\nSabor: ";
  std::cin>>SABOR_DUPLO2;
  if (SABOR_DUPLO1==1 || SABOR_DUPLO1==2|| SABOR_DUPLO1==3 || SABOR_DUPLO2==1 || SABOR_DUPLO2==2|| SABOR_DUPLO2==3) {
   std::cout<<"\nTudo certo! Suas 2 pizzas estarão prontas em breve.\nValor: R$"<<VALOR;
  }
  else {
   std::cout<<"Digite um sabor válido!";
  }
 }

 //Se for 3, ou mais, sabores de pizza
 if(PIZZA>=3) {
  std::cout<<"Das suas "<<PIZZA<<" pizzas, quantas serão de CALABRESA: ";
  std::cin>>CALABRESA;
  std::cout<<"Das suas "<<PIZZA<<" pizzas, quantas serão de PRESUNTO: ";
  std::cin>>PRESUNTO;
  std::cout<<"Das suas "<<PIZZA<<" pizzas ,quantas serão de MARGUERITA: ";
  std::cin>>MARGUERITA;
  if(CALABRESA+PRESUNTO+MARGUERITA==PIZZA) {
   std::cout<<"\nTudo certo! Suas "<<PIZZA<<" pizzas, ("<<CALABRESA<<" de calabresa, "<<PRESUNTO<<" de presunto"<<" e "<<MARGUERITA<<" de marguerita), estarão prontas em breve.\nValor: R$"<<VALOR;
  }
  else {
   std::cout<<"Digite quantidades válidas!";
  }

 }

 return 0;
}