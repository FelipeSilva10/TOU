/*Faça um algoritmo que multiplique dois números inteiros e mostre na tela*/

#include <iostream>

int main () {
    //Declaração de variáveis
    int multiplicador, multiplicando, produto;
    //Entrados de dados
    std::cout<<"Insira um número inteiro: ";
    std::cin>>multiplicador;
    std::cout<<"Insira outro número inteiro: ";
    std::cin>>multiplicando;
    //Operações
    produto=multiplicador*multiplicando;
    //Saída de dados
    std::cout<<"O produto dos números inteiros é igual à "<<produto;
    return 0;
}