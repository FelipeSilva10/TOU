/*https://neps.academy/br/exercise/822*/

#include <iostream>

int main() {
    int D;  //Declaração de variáveis
    std::cin>>D;    //Entrada de dados
    if(D>=6&&D<=800008){
        if((D-6)%8==0) {
            std::cout<<"1";
        }
        if((D-7)%8==0) {
            std::cout<<"2";
        }
        if((D-8)%8==0) {
            std::cout<<"3";
        }
    }
    return 0;
}


