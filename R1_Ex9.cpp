/*Faça um algoritmo que pegue o preço do arroz e mostre na tela*/

#include <cstdio>

int main () {
    //Entrada de dados
    float arroz;

    //Entrada de dados
    printf("Insira o valor do arroz: ");
    scanf("%f", &arroz);

    //Saída de dados
    printf("O arroz está custando %.2f R$", arroz);

    return 0;
}