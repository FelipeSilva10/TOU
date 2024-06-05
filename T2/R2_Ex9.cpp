/*Faça um algoritmo que diga se um número é par ou ímpar*/

#include <iostream>

int main() {
    //Declaração de variáveis
    int N;
    //Entrada de dados
    std::cout<<"Digite um número inteiro: ";
    std::cin>>N;
    //Lógica e Saída de dados
    if(N%2==0) {
        std::cout<<N<<" é PAR!";
    }
    else {
        std::cout<<N<<" é ÍMPAR!";
    }
    return 0;
}
