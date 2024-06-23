/*https://neps.academy/br/exercise/224*/

#include <iostream>

int main(){
    int T,R,Q,Rmenor; //Declaração de variáveis
    Q=0;
    std::cin>>T; //Entrada de dados: Atribuição para variável que define a quantidade de tipos (Quantidade de entradas subsequentes)
    if(T>=1 && T<=1000) { //Condição proposta no exercício
        while(T>0) { //Laço de repetição para encontrar a quantidade de envelopes (Menor número dos T números)
            std::cin>>R; //Entrada de dados: Atribuir valor a variável R T vezes
            if(Q==0) { //Condição para ser executada uma única vez, no ínicio do laço.
                Rmenor=R; //Atribuir o primeiro número da repetição como menor, para assim ser comparado.
                Q=1; //A parti dessa atrtibuição o IF será false
            }
            if(R<=Rmenor) { //Se o valor inserido for menor que o anteriomente atribuído-
                Rmenor=R; //-Será armazenado na variável Rmenor, assim, o menor número dos T números será Rmenor.
            }
            T=T-1; //Operação que faz o laço de repetição "rodar" Tvezes
        }
        std::cout<<Rmenor; //Quantidade de envelopes é impressa na tela (Menor número atribuído á R)
    }
    return 0;
}


