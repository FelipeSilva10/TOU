/*https://neps.academy/br/exercise/187*/

#include <iostream>

int main() {
    int n[10]; //Declarar a variável que armazenará os 10 números
    for(int i=0;i<10;i++) { //Roda 10 vezes, do índice 0 ao 9
        std::cin>>n[i]; //Entrada de dados: armazenar dado no índice
    }
    for(int i=9;i>-1;i--) { //Roda 10 vezes, do índice 9 ao 0
        std::cout<<n[i]<<"\n"; //Entrada de dados: armazenar dado no índice
    }
    return 0; //Retorna com sucesso
}


