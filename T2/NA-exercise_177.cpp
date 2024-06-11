/*https://neps.academy/br/exercise/177*/

#include <iostream>

int main() {
    int X,Y,Z;  //Declaração de variáveis
    int T = 0;
    std::cin>>X;    //Entrada de dados
    std::cin>>Y;
    std::cin>>Z;
    if(X>=1&&X<=1000&&Y>=1&&Y<=1000&&Z>=1&&Z<=1000) {
        //Restrições
        if(X%2==0||X%5==0) {
            T=T+1;
        }
        if(Y%2==0||Y%5==0) {
            T=T+1;
        }
        if(Z%2==0||Z%5==0) {
            T=T+1;
        }
        std::cout<<T;
    }
    return 0;
}


