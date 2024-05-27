/*Faça um algoritmo que pegue a altura de uma pessoa e mostre na tela*/

#include <cstdio>

int main () {
    //Declaração de variável
    float altura; //float por que a altura dele é um número quebrado

    //Receber altura
    printf("Qual a sua altura em metros?\n");
    printf("altura: ");
    scanf("%f", &altura);

    //Exibir resultado no terminal
    printf("Sua altura é: %.2f metros",altura);

    return 0;
}
