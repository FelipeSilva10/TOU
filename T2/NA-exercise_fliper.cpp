/*https://neps.academy/br/exercise/87*/

#include <iostream>

int main() {
    //Declaração de variáveis
    int P,R;
    //Entrada de dados
    std::cin>>P>>R;
    //Lógica e Saída de dados
    if(P==0||P==1&&R==0||R==1) {
        if(P==1&&R==1) {
            std::cout<<"A";
        }
        if(P==1&&R==0) {
            std::cout<<"B";
        }
        if(P==0) {
            std::cout<<"C";
        }
    }
    return 0;
}


