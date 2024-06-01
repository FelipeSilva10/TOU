/*Faça um algoritmo que faça a soma, subtração, multiplicação e divisão CORRETA de dois números inteiros e mostre na tela*/

#include <iostream>

int main () {
    //Declaração de variáveis
    int num1,num2,soma,diferenca,produto,divisao;
    //Entradas de dados
    std::cout<<"Digite um número: ";
    std::cin>>num1;
    std::cout<<"Digite outro número: ";
    std::cin>>num2;
    //Operações
    soma=num1+num2;
    diferenca=num1-num2;
    produto=num1*num2;
    divisao=num1/num2;
    //Saída de dados
    std::cout<<"A soma dos dos dois números é: "<<soma<<std::endl;
    std::cout<<"A diferença dos dois número é: "<<diferenca<<std::endl;
    std::cout<<"O produto dos dois números é: "<<produto<<std::endl;
    std::cout<<"A divisão dos dois números é: "<<divisao<<std::endl;

    return 0;
}