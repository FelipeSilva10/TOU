/*https://judge.beecrowd.com/pt/problems/view/1180*/

#include <iostream>

int main() {
    int N,posicao,aux=0,menorvalor; //Declaração de variáveis
    std::cin>>N; //Tamanho do vetor de X
    if(1<N<1000) { //Condição imposta pelo exercício
        int X[N]; //Declaração de variável com N sendo o tamanho de um vetor
        for(int i=0;i<N;i++) { //Laço de repetição para armazenar valores nos índices
            std::cin>>X[i];
        }
        for(int i=0;i<N;i++) { //Laço para achar o menor valor e seu índice
            if(aux==0) { //Condição para inicar menorvalor com o elemento do primeiro índice
                menorvalor=X[i];
                aux=1;
            }
            if(X[i]<menorvalor) { //Condição para achar o menor valor
                menorvalor=X[i]; //Atrbuir o menor valor de X[i]
                posicao=i; //Atribui o índice desse menor valor
            }
        }
        std::cout<<"Menor valor: "<<menorvalor<<"\n";
        std::cout<<"Posicao: "<<posicao<<"\n";
    }
    return 0;
}
