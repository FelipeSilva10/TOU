/*Faça um algoritmo que pegue a idade de uma pessoa e mostre na tela*/

#include <iostream>

int main () {
    int idade; //Declara a variável que irá armazenar a idade
    std::cout <<"Insira sua idade: "; //Imprime no terminal
    std::cin >> idade; //Armazena o número inteiro inserido no terminal na variável idade
    std::cout <<"Sua idade é: "<< idade <<std::endl; //Imprime no terminal a variável idade
    return 0; //Retorna 0 sem erros
}
