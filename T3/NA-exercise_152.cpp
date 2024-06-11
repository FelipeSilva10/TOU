/*https://neps.academy/br/exercise/152*/

#include <iostream>

int main() {
    int y=0; //Declarando a variável e startando um valor inicial
    std::cin>>y; //Atribuindo um valor ppor meio de input
    for(int x=0;x<10;x++){ //Laço de repetição para a soma e exibição dos 10 próximos números depois de y
        y=y+1; //Soma +1 à x toda vez que o laço se repete
        std::cout<<y<<" "; //Imprime o valor com um espaçamento
    }
    return 0;
}


