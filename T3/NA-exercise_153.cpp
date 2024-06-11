/*https://neps.academy/br/exercise/153*/

#include <iostream>

int main() {
    int x,y,z; //Declarando as variáveis
    x=0; //Atribuindo um valor inicial para a variável de repetição
    z=0; //Atribuindo um valor inicial para a variável de contagem
    while(x==0) { //Laço de repetição que acaba quando y==2018
        std::cin>>y; //Atribui um valor à y
        if(y==2018) { //Instrução para condição verdadeira
            std::cout<<z; //Imprimi a quantidade de tentativas por meio da variável de contagem z
            x=1; //Quebra do laço de repetição, x!=0
        }
        else { //Instrução para condição falsaondição falsa
            z=z+1; //Soma de tentativas
        }
    }
    return 0;
}


