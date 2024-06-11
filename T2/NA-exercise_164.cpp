/*https://neps.academy/br/exercise/164*/

#include <iostream>

int main() {
    int L,C;    //Declaração de variáveis
    std::cin>>L>>C; //Entrada de dados
    if(L>=1&&C<=1000) { //Restrições
        if(L%2==0&&C%2!=0||L%2!=0&&C%2==0) { //Condição para casa PRETA,ou seja, igual a 0
            std::cout<<"0";
        }
        if(L%2==0&&C%2==0||L%2!=0&&C%2!=0) {
            //Condição para casa BRANCA,ou seja, igual a 1
            std::cout<<"1";
        }
    }
    return 0;
}


