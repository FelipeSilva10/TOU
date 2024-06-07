/*https://neps.academy/br/exercise/260*/

#include <iostream>

int main() {
    int P1,P2,C1,C2;    //Declaração de variáveiS
    std::cin>>P1>>P2>>C1>>C2;   //Entrada de dados
    if(P1>=10&&P1<=100&&P2>=10&&P2<=100&&C1>=10&&C1<=100&&C2>=10&&C2<=100){ //Condição para as entradas serem >10 e <100
        if((P1*C1)==(P2*C2)){
            std::cout<<"0";
        }
        if((P1*C1)>(P2*C2)){
            std::cout<<"-1";
        }
        if((P1*C1)<(P2*C2)){
            std::cout<<"1";
        }
    }
    return 0;
}
