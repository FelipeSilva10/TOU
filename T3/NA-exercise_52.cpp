/*https://neps.academy/br/exercise/52*/

#include <iostream>

int main() {
    int R,I; //Declaração de variáveis
    bool A=false; //Como propôs o exercício, ambas as lâmpadas estão apagadas
    bool B=false;
    std::cin>>R; //Entrada de dados: Quantidade de vezes que os interruptores foram apertados (Quantidade de entradas subsequentes)
    if(R>=2 && R<=100000) { //Condição proposta no exercício
        while(R>0) { //Laço de repetição da quantidade vezes que os interruptores foram apertados
            std::cin>>I; //Variável que o valor atribuído é correspondente ao interruptor apertado, 1 ou 2
            if(I==1) { //Se o interruptor 1 for apertado
                A=!A; //Muda a variável booleana A de estado
            }
            if(I==2) { //Se o interruptor 2 for apertado
                A=!A; //Muda a variável booleana A de estado
                B=!B; //Muda a variável booleana B de estado
            }
            R=R-1; //Operação que faz o laço de repetição "rodar" Rvezes
        }
        std::cout<<A<<"\n"<<B; //Estado final das lâmpadas
    }
    return 0; //Retornar 0 para concluir sucesso
}