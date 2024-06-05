/*Faça um algoritmo que diga se um número é positivo, negativo ou nulo*/

#include <iostream>

int main() {
    //Declaração de variáveis
    int N;
    //Entrada de dados
    std::cout<<"Digite um número inteiro: ";
    std::cin>>N;
    //Lógica e Saída de dados
    if(N>0) {
        std::cout<<N<<" é positivo";
    }
    if(N<0) {
        std::cout<<N<<" é negativo";
    }
    if(N==0) {
        std::cout<<N<<" é nulo";
    }

    return 0;
}
