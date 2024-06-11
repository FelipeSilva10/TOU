/*https://neps.academy/br/exercise/155*/

#include <iostream>

int main() {
    int N,y,m2,m3,m4; //Declaração de variáveis
    m2=0; //Atribuição inicial igual à 0
    m3=0;
    m4=0;
    std::cin>>N; //Atribuir valor, por meio de input, à variável N, que define a quantidade de repetições do laço
    if(N>=0&&N<=100) {
        for(int x=0;x<N;x++) { //Repetição
            std::cin>>y; //Entrada de dados: atribuindo valor a variável y
            if(y%2==0) { //Verificando se é multiplos de 2
                m2=m2+1; //Somando +1 a variável contadora
            }
            if(y%3==0) { //Verificando se é multiplipo de 3
                m3=m3+1; //Somando +1 a variável contadora
            }
            if(y%4==0) { //Verificando se é multiplipo de 4
                m4=m4+1; //Somando +1 a variável contadora
            }
        }
        std::cout<<m2<<"\n"<<m3<<"\n"<<m3; //Exibindo as variáveis contadoras dos multiplos
    }
    return 0;
}


