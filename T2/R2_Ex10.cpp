/*Faça um algoritmo que diga se um número é positivo ou negativo e par ou ímpar.
Exemplos: 3 par e positivo; -8 par e negativo; 5 ímpar e positivo; -1 ímpar e negativo*/

#include <iostream>

int main() {
    //Declaração de variáveis
    int N;
    //Entrada de dados
    std::cout<<"Digite um número inteiro: ";
    std::cin>>N;
    //Lógica e Saída de dados
    if(N%2==0) { //PAR
        if(N>0) {
            std::cout<<N<<" é par e positivo";
        }
        if(N<0) {
            std::cout<<N<<" é par e negativo";
        }
        if(N==0) {
            std::cout<<N<<" é par e nulo";
        }
    }
    else { //Ímpar
        if(N>0) {
            std::cout<<N<<" é ímpar e positivo";
        }
        if(N<0) {
            std::cout<<N<<" é ímpar e negativo";
        }
        if(N==0) {
            std::cout<<N<<" é ímpar e  nulo";
        }
    }
    return 0;
}
