/*https://neps.academy/br/exercise/553*/

#include <iostream>

int main() {
    //Declaração de variáveis
    int C,P,F;
    //Entrada de dados
    std::cin>>C>>P>>F;
    //Lógica e Saída de dados
    if(C>=1&&C<=1000&&P>=1&&P<=1000&&F>=1&&F<=1000) {
        if((P/C)>=0&&F*C<=P) {
            std::cout<<"S";
        }
        else {
            std::cout<<"N";
        }
    }
    return 0;
}


