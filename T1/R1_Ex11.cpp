/*Faça um algoritmo que some dois números inteiros e mostre na tela*/

#include <iostream>

int main () {
    //Declaração de veriáveis
    int a,b,c;

    //Entrada de dados
    std::cout<<"Vamos somar"<<std::endl;
    std::cout<<"Insira o primeiro número: ";
    std::cin>>a;
    std::cout<<"Insira o segundo número: ";
    std::cin>>b;

    //Operações
    c=a+b;

    //Saída de dados
    std::cout<<"A soma de a e b é igual à "<<c;

    return 0;
}