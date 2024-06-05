/*Faça um algoritmo que pegue a primeira letra do nome de uma pessoa e mostre na tela*/

#include <iostream>

int main () {
    char letra; //Só armazena 1 caractere, por isso só é impresso no terminal a primeira letra do nome digitado
    std::cout<<"Digite seu nome: ";
    std::cin>>letra;
    std::cout<<"A primeira letra do seu nome é: "<<letra;
    return 0;
}
