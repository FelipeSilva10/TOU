/*Positivo, Negativo ou Nulo

Faça um programa para ler um inteiro x.
Imprima a mensagem "positivo" se o valor for positivo.
Imprima a mensagem "negativo" caso o valor seja negativo.
Imprima a mensagem "nulo" se o valor for zero.

Entrada
A entrada consiste de uma linha contendo um inteiro.

Saída
A saída consiste de uma linha contendo uma mensagem.

Restrições
o valor fornecido não terá valor absoluto maior que 1000.*/

#include <iostream>

int main() {
    //Declaração de variáveis
    int x;

    //Entrada de dados
    std::cout<<"Digite um número inteiro: ";
    std::cin>>x;

    //Lógica e Saída de dados
    if(x<=1000&&x>=-1000) {
        if(x>0) {
            std::cout<<"Positivo";
        }
        if(x<0) {
            std::cout<<"Negativo";
        }
        if(x==0) {
            std::cout<<"Nulo";
        }
    }
    else {
        std::cout<<"Digite um número inteiro, menor que 1000 e maior que -1000!";
    }
    return 0;
}

