/*https://neps.academy/br/exercise/162*/

#include <iostream>

int main() {
    //Declaração de variáveis
    int D;
    //Entrada de dados
    std::cout<<"Distância da cesta em cm: ";
    std::cin>>D;
    //Lógica e Saída de dados
    if(D<=2000&&D>=0) { //Restrição
        if(D<=800) {
        std::cout<<"Sua pontuação: 1";
        }
        if(D>800&&D<=1400) {
            std::cout<<"Sua pontuação: 2";
        }
        if(D>1400&&D<=2000) {
            std::cout<<"Sua pontuação: 3";
        }
    }
    else {
        std::cout<<"Digite um valor de 0 à 2000!";
    }

    return 0;
}



