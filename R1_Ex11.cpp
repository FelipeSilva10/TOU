/*Faça um algoritmo que some dois números inteiros e mostre na tela*/

#include <cstdio>

int main () {
    //Declaração de veriáveis
    int a,b,c;

    //Entrada de dados
    printf("Vamos somar\n");
    printf("Insira o primeiro número: ");
    scanf("%d", &a);
    printf("Insira o segundo número: ");
    scanf("%d", &b);

    //Operações
    c=a+b;

    //Saída de dados
    printf("O resultado da soma é %d", c);

}