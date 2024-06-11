/*https://neps.academy/br/exercise/157*/

#include <iostream>

int main() {
    int x; //Declaração da variável
    std::cin>>x; //Entrada de dados: atribuir valor à x
    for(int y=1;y<=x;y++){ //Laço de repetição: y servirá tanto como variável de manutenção do laço, como para divisor de x
        if(x%y==0){ // Condição para que se o número atribuido a y for um divisor de x
            std::cout<<y<<" "; //Imprimir o divisor de x
        }
    }
    return 0;
}

