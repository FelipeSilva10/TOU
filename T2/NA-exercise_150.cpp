/*https://neps.academy/br/exercise/150*/

#include <iostream>

int main() {
    //Declaração de variáveis
    int A,B,C;
    //Entrada de dados
    std::cout<<"A: ";
    std::cin>>A;
    std::cout<<"B: ";
    std::cin>>B;
    std::cout<<"C: ";
    std::cin>>C;
    //Lógica e Saída de dados
    if(A<=1000&&A>=-1000&&B<=1000&&B>=-1000&&C<=1000&&C>=-1000) {
        if(A>B&&A>C) {
            std::cout<<"O maior dos três é: "<<A;
        }
        if(B>A&&B>C) {
            std::cout<<"O maior dos três é: "<<B;
        }
        if(C>A&&C>B) {
            std::cout<<"O maior dos três é: "<<C;
        }
        if(C==A&&A==B) {
            std::cout<<"O maior dos três é: "<<C;
        }
    }
    else {
        std::cout<<"Digite um número entre -1001 e 1001";
    }

    return 0;
}



