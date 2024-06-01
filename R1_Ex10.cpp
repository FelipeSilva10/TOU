/*Faça um algoritmo que pegue a primeira vogal do nome de uma pessoa e mostre na tela*/

#include <iostream>

int main () {
    char nome[100], vogal = 'g';
    int i = 0;

    std::cout<< "Digite um nome: ";
    std::cin>>nome;

    while(nome[i]!='\0') {
        char letra = std::tolower(nome[i]);
        if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u') {
            vogal = nome[i];
            break;
        }
        i++;
    }

    std::cout<<"A primeira vogal do seu nome: "<<vogal<<std::endl;

    return 0;
}