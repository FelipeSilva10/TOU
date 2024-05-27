/*Faça um algoritmo que pegue a primeira letra do nome de uma pessoa e mostre na tela*/

#include <cstdio>

int main () {
    //Declaração de variáveis
    char nome;

    //Entradas de dados
    printf("Insira seu nome: ");
    scanf("%c", &nome);

    //Saída de dados
    printf("A primeira letra do seu nome é: %c", nome);

    return 0;
}
