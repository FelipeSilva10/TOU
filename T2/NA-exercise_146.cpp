/*https://neps.academy/br/exercise/146*/

#include <iostream>

int main() {
    //Declaração de variáveis
    int x,y;
    //Entrada de dados
    std::cout<<"x: ";
    std::cin>>x;
    std::cout<<"y: ";
    std::cin>>y;
    //Lógica e Saída de dados
    if(x>=-100&&y<=100) {
        if(x>0&&y>0) {
            std::cout<<"Q1";
        }
        if(x<0&&y>0) {
            std::cout<<"Q2";
        }
        if(x<0&&y<0) {
            std::cout<<"Q3";
        }
        if(x>0&&y<0) {
            std::cout<<"Q4";
        }
        if(x==0||y==0) {
            std::cout<<"eixos";
        }
        return 0;
    }
}


