/*https://neps.academy/br/exercise/194*/

#include <iostream>

int main() {
    int n[10]; //Declarar a variável que armazenará os 10 números
    for(int i=0;i<10;i++) { //Laço de repetição para entrada de dados
        std::cin>>n[i];
    }
    for(int i=0;i<10;i++) { //Exibir números pares
        if(n[i]%2==0) {
            std::cout<<n[i]<<" ";
        }
    }
    std::cout<<"\n"; //Quebra de linha
    for(int i=0;i<10;i++) { //Exibir números ímpares
        if(n[i]%2!=0) {
            std::cout<<n[i]<<" ";
        }
    }
    return 0;
}


