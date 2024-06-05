/*
Faça um algoritmo que diga se a pessoa pode ou não comprar um sapato de RS239.99.
SE ELA TIVER O VALOR DO SAPATO OU MAIS DIGA QUE ELA VAI COMPRAR. SENÃO DIGA QUE ELA NÃO PODE COMPRAR
*/

#include <iostream>

int main() {
    //Declaração de variáveis
    float VS = 239.99;
    float D;
    //Entrada de dados
    std::cout<<"Quanto dinheiro você tem? \nDigite aqui: ";
    std::cin>>D;
    //Lógica e Saída de dados
    if(D>=VS) {
        std::cout<<"Você pode comprar o sapato!";
    }
    else {
        std::cout<<"Sinto muito, você não tem dinheiro suficiente para comprar o sapato.";
    }
    return 0;
}