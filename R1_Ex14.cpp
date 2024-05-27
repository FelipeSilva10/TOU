/*Faça um algoritmo que subtraia dois números inteiros e mostre na tela*/

#include <iostream>

int main () {
    int minuendo,subtraendo,diferenca;
    std::cout<<"Digite um número: ";
    std::cin>>minuendo;
    std::cout<<"Digite outro número: ";
    std::cin>>subtraendo;
    diferenca=minuendo-subtraendo;
    std::cout<<"Diferença: "<<diferenca;
    return 0;
}


