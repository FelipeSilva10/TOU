/*Faça um algoritmo que diga se uma pessoa é maior ou menor de idade.
SE A IDADE DA PESSOA FOR MAIOR OU IGUAL A 18 ANOS ELA É MAIOR DE IDADE. SENÃO ELA É MENOR DE IDADE*/

#include <iostream>

int main() {
    //Declaração de variáveis
    int IDADE;

    //Entrada de dados
    std::cout<<"DIgite sua idade: ";
    std::cin>>IDADE;

    //Lógica e Saída de dados
    if(IDADE>0) {
        if(IDADE>=18) {
            std::cout<<"Você é maior de idade!";
        }
        else {
            std::cout<<"Você é menor de idade!";
        }
    }
    else {
        std::cout<<"Digite uma idade superior, ou igual, à 1 ano!";
    }

    return 0;
}