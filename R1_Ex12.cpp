/*Faça um algoritmo que some dois números reais e mostre na tela*/

#include <iostream>

int main () {
    float num1,num2,soma;
    std::cout<<"Digite um número: ";
    std::cin>>num1;
    std::cout<<"DIgite outro número: ";
    std::cin>>num2;
    soma=num1+num2;
    std::cout<<"O resultado da soma dos números reais é: "<<soma;
    return 0;
}
