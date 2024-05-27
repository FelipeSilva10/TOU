/*Faça um algoritmo que multiplique dois números reais e mostre na tela*/

#include <iostream>

int main () {
    float a,b,c;
    std::cout<<"Digite o multiplicador: ";
    std::cin>>a;
    std::cout<<"Digite o multiplicando: ";
    std::cin>>b;
    c=a*b;
    std::cout<<"Resultado da multiplicação: "<<c;
    return 0;
}