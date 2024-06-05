/*Faça um algoritmo que some, subtraia e multiplique dois números inteiros e mostre na tela*/

#include <iostream>

int main () {
    //Declaração de variáveis
    int num1,num2,soma,diferenca,produto;
    //Entradas de dados
    std::cout<<"Digite um número: ";
    std::cin>>num1;
    std::cout<<"Digite outro número: ";
    std::cin>>num2;
    //Operações
    soma=num1+num2;
    diferenca=num1-num2;
    produto=num1*num2;
    //Saída de dados
    std::cout<<"A soma dos dos dois números é: "<<soma<<std::endl;
    std::cout<<"A diferença dos dois número é: "<<diferenca<<std::endl;
    std::cout<<"O produto dos dois números é: "<<produto<<std::endl;

    return 0;
}