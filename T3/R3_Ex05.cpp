/*Faça um algoritmo que mostre na tela os números de 0 a 10 utilizando laços de repetição*/

#include <iostream>

int main() {
    int x;
    int y= -1; //Declaração de variáveis
    for(x=0;x<11;x++) {
        y=y+1;
        std::cout<<y<<"\n";
    }
    return 0;
}
